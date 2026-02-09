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
    int n,x,y; cin>>n>>x>>y;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
     priority_queue<int>pq;
    for(int i=0;i<n;i++){
        pq.push(abs(a[i]-b[i]));

    }
   
    int i=0;
    int s=x+y;
    while(s>0){
        int v = pq.top();pq.pop();
        pq.push(abs(v-1));
        s--;
    }
    int res=0;
    while(!pq.empty()){
      int v =pq.top();pq.pop();
      res += v*v;
    }
    cout<<res<<endl;


}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t = 1;
  // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

