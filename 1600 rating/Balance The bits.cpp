#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()

bool balanced(const string &t) {
    int bal = 0;
    for (char c : t) {
        bal += (c == '(' ? 1 : -1);
        if (bal < 0) return false;
    }
    return bal == 0;
}

void solve() {
  int n; cin >> n;
    string s; cin >> s;

    int ones = count(s.begin(), s.end(), '1');
    if (n % 2 || ones % 2 || s.front() == '0' || s.back() == '0') {
        cout << "NO\n";
        return;
    }

    string A(n, '?'), B(n, '?');
    int seen1 = 0;
    bool flip0 = false; 


    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
       if (seen1 < ones / 2) {
                A[i] = '(';
                B[i] = '(';
            } else {
                A[i] = ')';
                B[i] = ')';
            }
            ++seen1;
        } else {
            if (!flip0) {
                A[i] = '('; B[i] = ')';
            } else {
                A[i] = ')'; B[i] = '(';
            }
            flip0 = !flip0;
        }
    }


    if (balanced(A) && balanced(B)) {
        cout << "YES\n" << A << "\n" << B << "\n";
    } else {
        cout << "NO\n";
    }
 
}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t = 1;
   cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

