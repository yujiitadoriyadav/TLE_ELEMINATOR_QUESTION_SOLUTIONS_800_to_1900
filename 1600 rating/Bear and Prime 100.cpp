#include <bits/stdc++.h>
using namespace std;

bool query(int a) {
    cout << a << endl;
    cout.flush();   // FLUSH after query
    string s;
    cin >> s;
    return (s == "yes");
}

void solve() {
    vector<int> primes = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int cnt = 0;

    for (int p : primes) {
        if (query(p)) {
            cnt++;
            if (p * p <= 100 && query(p * p)) {
                cout << "composite" << endl;
                cout.flush();
                return;
            }
        }
        if (cnt >= 2) {
            cout << "composite" << endl;
            cout.flush();
            return;
        }
    }

    cout << "prime" << endl;
    cout.flush();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
