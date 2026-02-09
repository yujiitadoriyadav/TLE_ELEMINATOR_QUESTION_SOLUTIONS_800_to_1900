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
   vector<int>a(n);
   for(int i=0;i<n;i++) cin>>a[i];

   int xoro=0;
   for(int i=0;i<n;i++) xoro^=a[i];
   if(xoro==0){
     cout<<"YES"<<endl;
   }
   else{
      vector<int>xoro1(n);
      xoro1[0]=a[0];
     

      for(int i=1;i<n;i++){
         xoro1[i] =xoro1[i-1]^a[i];

      } 
    bool flag =0;

     for(int i=0;i<n-1;i++){
         for(int j=i+1;j<n-1;j++){
           int a = xoro1[i];
           int b = xoro1[i]^xoro1[j];
           int c = xoro1[j]^xoro1[n-1];
           if(a==b && b==c ){
             flag = true;
             break;
           } 
        }
     }
      
     
      if(flag) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;

      
   }
   
 
}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t = 1;
   cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

