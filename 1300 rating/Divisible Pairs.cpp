// #include <bits/stdc++.h>
// typedef long long ll;
// using namespace std;

// // Custom hash function for pair<int, int>
// struct hash_pair {
//     size_t operator()(const pair<int, int>& p) const {
//         return hash<int>()(p.first) ^ (hash<int>()(p.second) << 1);
//     }
// };

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         ll x, y;
//         cin >> x >> y;
        
//         unordered_map<pair<int, int>, ll, hash_pair> mp;
//         vector<ll> a(n);
//         for (int i = 0; i < n; i++) cin >> a[i];
        
//         ll ans = 0;
//         for (int i = 0; i < n; i++) {
//             int xmod = a[i] % x;
//             int ymod = a[i] % y;
//             pair<int, int> key = {(x - xmod) % x, ymod};
            
//             if (mp.find(key) != mp.end()) {
//                 ans += mp[key];
//             }
            
//             mp[{xmod, ymod}]++;
//         }
        
//         cout << ans << endl;
//     }
// }
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
 ll t;
 cin>>t;
 while(t--){
     ll n,x,y;
     cin>>n>>x>>y;
     vector<int>v(n);
     for(int i=0;i<n;i++) cin>>v[i];
     map<pair<ll,ll>,ll>mpp;
     ll cnt=0;
     for(int i=0;i<n;i++) {cnt+=mpp[{(x-v[i]%x)%x,v[i]%y}];
     mpp[{v[i]%x,v[i]%y}]++;}
     cout<<cnt<<endl;
 }
return 0;
}