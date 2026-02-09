
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
const int mod =1e9+7;


void solve() {
    int n ; cin>>n;
    string s; cin>>s;
    int plus =0,minus =0;
    for(int i=0;i<n;i++){
        if(s[i]=='+') plus++;
        else minus++;
    }
   
    int q; cin>>q;
    while(q--){
        int a,b; cin>>a>>b;
        if(a==b){
            if(plus==minus) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else {
            
            int num = b*(minus-plus);
            int d =a-b;
            if(num%d!=0) cout<<"NO"<<endl;
            else{
                int k = num/d;
             if(k>=(-minus) && k<=plus){              
                cout<<"YES"<<endl;
               }
                else cout<<"NO"<<endl;
            }
               
            }

        }
    }
  

 


int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
   // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}