#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
const int mod =1e9+7;

void solve() {
 int n; cin>>n;
 set<int>poss;
 vector<vector<int>>tree(n+1);
 for(int i=0;i<n;i++){
    int p,c; cin>>p>>c;
  if(p==-1) continue;
if(c==1){
    poss.insert(i+1);
}
 tree[p].push_back(i+1);
 }
 bool flag =0;
 for(auto a:poss){
    int c=1;
    for(auto b:tree[a]){
        if(poss.find(b)==poss.end()){
            c=0;
            break;
        }
    }
    if(c){
        flag =1;
        cout<<a<<" ";
    }
 }
 if(flag==0) cout<<-1;
 cout<<endl;

}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
