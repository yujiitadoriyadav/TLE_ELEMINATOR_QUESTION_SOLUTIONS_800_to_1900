#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
#define DEV_OP // mere ko plague nahi lagwa payge bhen ke lode 


void solve() {
   int n,k; cin>>n>>k;
   vector<int>a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   if(k<=1){
    int l = *max_element(a.begin(), a.end()-1);
    int r = *max_element( a.begin()+1, a.end());

    cout<<max((l+a[n-1]),r+a[0])<<endl;;
   }
   else{
   sort(a.rbegin(),a.rend());
   int ans=0;
   for(int i=0;i<min(k+1,n);i++){
    ans+=a[i];
   }
   cout<<ans<<endl;
}
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
