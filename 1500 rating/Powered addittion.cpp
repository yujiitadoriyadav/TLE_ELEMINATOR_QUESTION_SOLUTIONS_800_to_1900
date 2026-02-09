#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int maxi =a[0];
    int m =0;
    for(int i=1;i<n;i++){
       if(a[i]<maxi){
       m = max(m,maxi-a[i]);
       }
       maxi = max(maxi,a[i]);
    }
    cout<<ceil(log2(m+1))<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
