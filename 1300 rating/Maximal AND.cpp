#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()

// aukat mein chhote 

void solve() {
   int n,k; cin>>n>>k;
   vector<int>a(n);
   for(int i=0;i<n;i++) cin>>a[i];
unordered_map<int,int>mp;
for(int i=0;i<=30;i++) mp[i]=0;

for(int i=0;i<=30;i++){
    for(int j=0;j<n;j++){
        if((a[j]>>i)&1 ){
            mp[i]++;
        }
    }
   }
   int i=30;
//   while(k>n){
//     if(n-mp[i]>k) break;
//     k=k-(n-mp[i]);
//      mp[i]=n;
   
//     i--;
//   }
 while(k && i>=0){
    if(n-mp[i]<=k){
        k = k-(n-mp[i]);
        mp[i]=n;
    }
    i--;
 }
// for (int i=30; i>=0; i--) {
//     int need = n-mp[i]; 
//     if (need<=k) {
//         k -=need;
//         mp[i] =n;
//     }
// }

 int ans =0;
 for(int i=0;i<=30;i++){
    if(mp[i]==n){
        ans+=(1LL<<i);
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
