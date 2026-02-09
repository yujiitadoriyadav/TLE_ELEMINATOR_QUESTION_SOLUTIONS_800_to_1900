#include <bits/stdc++.h>
using namespace std;
const int mod =1e9+7;
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
   int c_even=1,c_odd=0,bal=0,ansp=0;
   // c_even prefix have even neg count 
   // bal -- no. neg no. 

   for(int i=0;i<n;i++){
    int x; cin>>x;
      if(x<0) bal++;
      if(bal%2==0){
        ansp+=c_even;
        c_even++;
      }
      else{
        ansp+=c_odd;
        c_odd++;
      }
   }


cout<<n*(n+1)/2-ansp<<" "<<ansp<<endl;
  
}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
  //  cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
