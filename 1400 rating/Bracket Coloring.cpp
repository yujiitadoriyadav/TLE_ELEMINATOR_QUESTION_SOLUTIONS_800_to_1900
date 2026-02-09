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
   int n; cin>>n;
    string s; cin>>s;
     int op=0,cl=0;
     int m=1,x=0,y=0;
     vector<int>a(n);
     for(int i=0;i<n;i++){
        bool flag=0;
        if(s[i]=='('){
            op++;
            flag=1;
        }
        else {
            cl++;
        }
        if(cl>op || (cl==op && flag)){
            m=2;
            a[i]=-1;
            x=1;
        }
        if(op>cl) y=1;
     }
     if(cl!=op){
        cout<<-1<<endl;
     }
     else{
        cout<<x+y<<endl;
        for(int i=0;i<n;i++){
            cout<<a[i]+m<<" ";
        }
        cout<<endl;
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

