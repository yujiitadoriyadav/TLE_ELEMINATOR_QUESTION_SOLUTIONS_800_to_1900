
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



void solve() {
  int n ; cin>>n;
   vector<int>a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   sort(a.begin(),a.end());
   int l=0,r=n-1;
   int ans =0;
    int x=0;
   while(l<=r){
      if(l!=r){
        int ans1 = min(a[l],a[r]-x);
        ans+=ans1;
        x+=ans1;
        a[l]-=ans1;
        if(a[l]==0) l++;

        if(a[r]==x){
            x=0;
            ans++;
            r--;
        }
      }
      else{
         if(x>=a[l] || a[l]==1) ans++;
         else{
            a[l]-=x;
            ans+=(a[l]+3)/2;
         }
         l++;
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