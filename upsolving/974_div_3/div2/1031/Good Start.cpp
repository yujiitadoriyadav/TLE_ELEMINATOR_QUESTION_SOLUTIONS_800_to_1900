#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
const int mod=1e9+7;


void solve() {
    int w ,h , a,b; cin>>w>>h>>a>>b;
    int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;

    if(x1==x2){
        if(abs(y2-y1)%b==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else if(y1==y2){
        if(abs(x2-x1)%a==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    else if((x2-x1)%a==0 || (y2-y1)%b==0 ){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
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

