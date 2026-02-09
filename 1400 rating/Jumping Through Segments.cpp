#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
bool check(int mid , vector<pair<int,int>>&v){
   int l=0,r=0;
   for(auto &a:v){
     // yaha intersection le rahe hai , chote  ka max , or bade  ka minimum 
     l =max(a.first,l-mid);
     r=min(a.second,r+mid);
     if(l>r) return false;
   }
   return true;
}
void solve() {
    int n;
    cin >> n;
   vector<pair<int,int>>v;
   for(int i=0;i<n;i++){
      int x,y; cin>>x>>y;
      v.pb({x,y});
   }
   int ans =0;
   int l =0,r=1e9;
   while(l<=r){
     int mid =(l+r)/2;
     if(check(mid,v)){
        ans =mid;
        r =mid-1;
     }
     else {
        l =mid+1;
     }
   }
   cout<<ans<<endl;
}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
