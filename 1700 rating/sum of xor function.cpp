// #include <bits/stdc++.h>
// using namespace std;

// #define int long long 
// #define pb push_back
// #define all(x) x.begin(), x.end()
// #define endl '\n' 
// #define F first
// #define S second
// #define sz(x) (int)x.size()
// const int mod =998244353;


// void solve(){
//   int n; cin>>n;
//   vector<int>a(n);
//   for(int i=0;i<n;i++) cin>>a[i];
//   vector<int>pref(n+1,0);
//   for(int i=1;i<=n;i++){
//      pref[i]=pref[i-1]^a[i-1];
//   }
//   int ans=0;
//   // tle 
//   // for(int i=1;i<=n;i++){
//   //   for(int j=i;j<=n;j++){
//   //       int x=i,y=j;
//   //       ans=(ans+1LL*(pref[y]^pref[x-1])*(y-x+1)%mod)%mod;
//   //   }
//   // }
//     for (int bit = 0; bit < 30; bit++) {

//         long long cnt[2] = {1, 0};      // pref[0] exists
//         long long sumIdx[2] = {0, 0};   // sum of indices
//         int cur = 0;                    // current parity

//         for (int y = 1; y <= n; y++) {

//             // update parity of prefix[y]
//             if (pref[y] & (1 << bit)) cur ^= 1;

//             int opp = cur ^ 1;

//             long long contribution =
//                 (cnt[opp] * y - sumIdx[opp]) % mod;

//             ans = (ans + contribution * (1LL << bit)) % mod;

//             cnt[cur]++;
//             sumIdx[cur] += y;
//         }
//     }
//   cout<<ans<<endl;
// }
// int32_t main() {  
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
    
//     int t = 1;
//     //cin >> t;
    
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

const long long mod = 998244353;

int n;
long long a[300001];
long long r;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    r = 0;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    // Process each bit independently
    for (int j = 0; j < 30; j++) {

        long long b[2] = {0, 0};   // sum of indices
        long long c[2] = {1, 0};   // count of prefixes
        bool f = 0;                // prefix parity

        for (int i = 1; i <= n; i++) {

            // Update parity for current bit
            f ^= (bool)(a[i] & (1LL << j));

            // Add contribution of subarrays ending at i
            r = (r + (c[f ^ 1] * i - b[f ^ 1]) % mod * (1LL << j) % mod) % mod;

            // Store current prefix info
            b[f] += i;
            c[f]++;
        }
    }

    cout << r << '\n';
    return 0;
}

