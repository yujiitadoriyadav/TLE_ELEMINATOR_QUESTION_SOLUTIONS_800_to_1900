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
    int n; cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x,y; cin>>x>>y;
        mp[x]++;
        mp[y+1]--;
    }
    bool flag =true;
    int s=0;
    for(auto a:mp){
      s+=a.second;
      if(s>2){
        cout<<"NO"<<endl;
        return;
      }
    }
    
        cout<<"YES"<<endl;
    

    

   
}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t = 1;
  //  cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
