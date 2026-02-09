#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
#define DEV_OP

// bas mughe ye pata hai ki no 2 baar to ayega , cycle even honi chahiye -- bas dhikh gaya logic mughe nahi pata 

void dfs(int i ,bool &flag , vector<int>&vd ,vector<vector<int>>&adj){

    for(int j=0;j<adj[i].size()&&flag;j++){
        int next = adj[i][j];
        if(adj[i].size()>2) flag =0;  // degre 3 ho gayi matlab do hiso nahi tut payega;

        if(!vd[next]){
            vd[next] = vd[i]+1;
            dfs(next,flag,vd,adj);
        }
        else{ // pehele se visit hai ;;
            if((vd[next]-vd[i]+1)%2) flag=0;

        }

        
    }
}

void solve() {
  int n; cin>>n;
  // code tip leta hun 
  vector<int>vd(n+1,0); // ye depth baayega aur cycle ki length 
  vector<vector<int>>adj(n+1);
  for(int i=0;i<n;i++){
    int x,y; cin>>x>>y;
     adj[x].pb(y);
     adj[y].pb(x);
  }
  bool flag = true;

  for(int i=1;i<=n&&flag;i++){
    if(!vd[i]){
        vd[i]=1;
        dfs(i,flag,vd,adj);
    }
  }

  if(flag){
    cout<<"YES"<<endl;
  }
  else{
     cout<<"NO"<<endl;
  }

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
