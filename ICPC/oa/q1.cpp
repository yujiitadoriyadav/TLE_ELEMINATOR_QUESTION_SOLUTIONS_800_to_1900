#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
using namespace std;

struct InputData {
    int rows;
    int cols;
    vector<vector<char>> board;
    int num_words;
    vector<string> words;
};

struct Node {
    bool end;
    unordered_map<char, Node*> next;
    Node() : end(false) {}
};

InputData read_input() {
    InputData d;
    cin >> d.rows >> d.cols;
    d.board.assign(d.rows, vector<char>(d.cols));
    for (int i = 0; i < d.rows; i++) {
        for (int j = 0; j < d.cols; j++) cin >> d.board[i][j];
    }
    cin >> d.num_words;
    d.words.resize(d.num_words);
    for (int i = 0; i < d.num_words; i++) cin >> d.words[i];
    return d;
}

void add(Node* r, const string& w) {
    Node* p = r;
    for (char c : w) {
        if (!p->next.count(c)) p->next[c] = new Node();
        p = p->next[c];
    }
    p->end = true;
}

void dfs(vector<vector<char>>& b, int i, int j, Node* p, string& cur, unordered_set<string>& res) {
    char c = b[i][j];
    if (!p->next.count(c)) return;
    p = p->next[c];
    cur.push_back(c);
    if (p->end) res.insert(cur);
    b[i][j] = '#';
    int dirs[8][2] = {{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
    for (auto& d : dirs) {
        int x = i + d[0], y = j + d[1];
        if (x >= 0 && y >= 0 && x < b.size() && y < b[0].size() && b[x][y] != '#') {
            dfs(b, x, y, p, cur, res);
        }
    }
    b[i][j] = c;
    cur.pop_back();
}

void solve_problem(const InputData& d) {
    Node* root = new Node();
    for (auto& w : d.words) add(root, w);
    unordered_set<string> res;
    string cur;
    for (int i = 0; i < d.rows; i++) {
        for (int j = 0; j < d.cols; j++) {
            dfs(const_cast<vector<vector<char>>&>(d.board), i, j, root, cur, res);
        }
    }
    vector<string> ans(res.begin(), res.end());
    sort(ans.begin(), ans.end());
    cout << ans.size() << "\n";
    for (auto& w : ans) cout << w << "\n";
}

int main() {
    InputData d = read_input();
    solve_problem(d);
    return 0;
}