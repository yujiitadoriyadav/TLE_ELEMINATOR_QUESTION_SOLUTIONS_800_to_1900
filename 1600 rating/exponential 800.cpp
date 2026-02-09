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
// bhenchod iske liye bhi template use karni padi 

// bhai sach mein ye 800 ka to nahi hai ;
// assume x =1then 1^y*y + y^1*1 = n then 
// y+y = n , n is even 
void solve() {
  int n; cin>>n;
  if(n%2) cout<<-1<<endl;
  else{
    cout<<1<<" "<<n/2<<endl;
  }

}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
