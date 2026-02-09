#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <tuple>

using namespace std;

struct InputData {
    // Undirected edges (u, v)
    vector<pair<int, int>> connections;
    // Seedable users and their costs; users absent from this map are NOT seedable
    map<int, int> costs;
    // User values keyed by user id (1..n)
    map<int, int> values;
    // Total budget and maximum influence depth
    int budget;
    int depth;
    // Preserve insertion order of potential seeds for deterministic tie-breaking
    vector<int> seed_order;
};

InputData readInput() {
    InputData data;

    // Read number of users
    int n;
    cin >> n;

    // Read number of connections
    int num_connections;
    cin >> num_connections;

    // Read connections
    for (int i = 0; i < num_connections; i++) {
        int u, v;
        cin >> u >> v;
        data.connections.push_back({u, v});
    }

    // Read number of potential seeds
    int num_seeds;
    cin >> num_seeds;

    // Read potential seeds and their costs (seedable users only)
    for (int i = 0; i < num_seeds; i++) {
        int user_id, cost;
        cin >> user_id >> cost;
        data.costs[user_id] = cost;
        data.seed_order.push_back(user_id);
    }

    // Read values for each user (1 to n)
    for (int i = 1; i <= n; i++) {
        int value;
        cin >> value;
        data.values[i] = value;
    }

    // Read budget and depth
    cin >> data.budget >> data.depth;

    return data;
}

tuple<vector<int>, int, int> solveCampaign(
    const vector<pair<int, int>>& connections,
    const map<int, int>& costs,
    const map<int, int>& values,
    const vector<int>& seed_order,
    int budget,
    int depth) {
    
    int n = values.size();
    vector<vector<int>> graph(n + 1);
    for (const auto& conn : connections) {
        int u = conn.first;
        int v = conn.second;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    vector<bool> reached(n + 1, false);
    vector<int> selected_seeds;
    int total_cost = 0;
    int remaining_budget = budget;
    
    while (true) {
        int best_candidate = -1;
        double best_efficiency = 0.0;
        int best_marginal_value = 0;
        
        // Check all potential seeds in the given order
        for (const auto& candidate_id : seed_order) {
            // Skip if already selected or not seedable
            if (find(selected_seeds.begin(), selected_seeds.end(), candidate_id) != selected_seeds.end()) {
                continue;
            }
            
            if (costs.find(candidate_id) == costs.end()) {
                continue;
            }
            
            int cost_candidate = costs.at(candidate_id);
            
            if (cost_candidate > remaining_budget) {
                continue;
            }
            
            // Calculate marginal value for this candidate
            int marginal_value = 0;
            vector<bool> visited(n + 1, false);
            queue<pair<int, int>> q;
            q.push({candidate_id, 0});
            visited[candidate_id] = true;
            
            while (!q.empty()) {
                int node = q.front().first;
                int current_depth = q.front().second;
                q.pop();
                
                if (!reached[node]) {
                    marginal_value += values.at(node);
                }
                
                if (current_depth < depth) {
                    for (int neighbor : graph[node]) {
                        if (!visited[neighbor]) {
                            visited[neighbor] = true;
                            q.push({neighbor, current_depth + 1});
                        }
                    }
                }
            }
            
            if (marginal_value == 0) {
                continue;
            }
            
            double efficiency = static_cast<double>(marginal_value) / cost_candidate;
            if (efficiency > best_efficiency) {
                best_efficiency = efficiency;
                best_candidate = candidate_id;
                best_marginal_value = marginal_value;
            }
        }
        
        if (best_candidate == -1) {
            break;
        }
        
        // Update reached nodes with the best candidate
        vector<bool> visited(n + 1, false);
        queue<pair<int, int>> q;
        q.push({best_candidate, 0});
        visited[best_candidate] = true;
        
        while (!q.empty()) {
            int node = q.front().first;
            int current_depth = q.front().second;
            q.pop();
            reached[node] = true;
            
            if (current_depth < depth) {
                for (int neighbor : graph[node]) {
                    if (!visited[neighbor]) {
                        visited[neighbor] = true;
                        q.push({neighbor, current_depth + 1});
                    }
                }
            }
        }
        
        selected_seeds.push_back(best_candidate);
        total_cost += costs.at(best_candidate);
        remaining_budget -= costs.at(best_candidate);
    }
    
    // Calculate total value
    int total_value = 0;
    for (int i = 1; i <= n; i++) {
        if (reached[i]) {
            total_value += values.at(i);
        }
    }
    
    return {selected_seeds, total_value, total_cost};
}

int main() {
    auto data = readInput();
    auto result = solveCampaign(
        data.connections, data.costs, data.values, data.seed_order, data.budget, data.depth);
    vector<int> selected_seeds = get<0>(result);
    int total_value = get<1>(result);
    int total_cost = get<2>(result);

    // Output the result
    for (int i = 0; i < selected_seeds.size(); i++) {
        if (i > 0) cout << " ";
        cout << selected_seeds[i];
    }
    cout << endl;
    cout << total_value << endl;
    cout << total_cost << endl;


    return 0;
}