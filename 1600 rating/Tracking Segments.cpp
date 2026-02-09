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
    int n, m;  
    cin >> n >> m;
    vector<int>l(m+1),r(m+1);
    for(int i=1;i<=m;i++) cin >> l[i] >> r[i];
    int q; cin>>q;
    vector<int>a(q+1) , s(n+1,0);
    for(int i=1;i<=q;i++) cin>>a[i];

    int st=1,e=q,mid;
    while(st<=e){
        bool flag =0;
        mid = (st+e)/2;
        for(int i=1;i<=n;i++) s[i]=0;
        for(int i=1;i<=mid;i++) ++s[a[i]];
        for(int i=1;i<=n;i++) s[i]+=s[i-1];
        for(int i=1;i<=m;i++){
           if(2*(s[r[i]]-s[l[i]-1]) > r[i]-l[i]+1) {
            
             flag = true;
           }
        }  
        if(flag)  e=mid-1;
        else st=mid+1;
    }

    cout<<(st==q+1?-1:e+1)<<endl;

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

