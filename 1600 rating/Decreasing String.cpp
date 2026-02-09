#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()


void solve() {
  string s; cin>>s;
  int p; cin>>p;
  int n = s.size();
  s=" "+s+" ";
  vector<char>st;
  bool flag =(p<=n);
  for(int i=1;i<=s.size();i++){
      while(!flag && !st.empty() && (st.back()>s[i])){
        st.pop_back();
        p-=n;
        n--;
        flag = (p<=n);
      }
      st.push_back(s[i]);
  }
  cout<<st[p-1];
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
// #include <bits/stdc++.h>
 
// using namespace std;
 
// int t;
// long long p, n;
// string s;
 
// int main()
// {
// 	cin >> t;
// 	while (t--) {
// 		cin >> s >> p;
// 		n = s.length();
// 		s = " " + s + " ";
// 		vector <char> stk;
// 		bool done = (p<=n);
// 		for (int i = 1; i <= s.length()+1; ++i) {
// 			while ( (!done) && (!stk.empty()) && (stk.back() > s[i]) ) {
// 				stk.pop_back();
// 				p -= (n--);
// 				done = (p<=n);
// 			}
// 			stk.push_back(s[i]);
// 		}
// 		cout << stk[p-1];
// 	}
// 	return 0;
// }
