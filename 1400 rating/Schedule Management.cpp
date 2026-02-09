#include <bits/stdc++.h>
using namespace std;
const int mod =1e9+7;
#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
#define DEV_OP


void solve() {

  int n,m; cin>>n>>m;
 
  vector<int>a(n,0);
  for(int i=0;i<m;i++){
      int x; cin>>x;
      a[x-1]++;
  }
  priority_queue<int>p;
  priority_queue<int, vector<int>, greater<int>> q;

  for(int i=0;i<n;i++) p.push(a[i]),q.push(a[i]);
  while(p.top()-1>=q.top()+2){
    int maxi= p.top(); p.pop();
    int mini = q.top(); q.pop();

    maxi -= 1;
    mini += 2;

    p.push(maxi);
    q.push(mini);
  }
  cout<<p.top()<<endl;
}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
 cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
