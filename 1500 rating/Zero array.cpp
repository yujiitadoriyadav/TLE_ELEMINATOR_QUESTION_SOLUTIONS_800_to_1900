
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
 
  int sum =0,odd=0,even=0;
   for(int i=0;i<n;i++){
      cin>>a[i];
      sum+=a[i];
      
   } 
   int maxi = *max_element(all(a));
   if(sum%2==0  && sum>=2*maxi){
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
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}