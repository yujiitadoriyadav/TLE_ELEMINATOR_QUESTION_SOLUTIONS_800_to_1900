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
    int n; cin >> n;
    bool flag =0;
    vector<pair<int,int>>v(n);
    vector<int>a(n);
    for(int i=0;i<n;i++){
      cin>>v[i].first>>v[i].second;
      a[i] =v[i].first;
    }
    sort(all(v));
    int l =v[0].first;
    int r =v[0].second;

    for(int i=1;i<n;i++){
        if(v[i].first<=r){
            if(v[i].second>r) r=v[i].second;
        }
        else {
            flag=1;
            break;
        }
    }
    if(flag==1){
        for(int i=0;i<n;i++){
            if(a[i]<=r) cout<<1<<" ";
            else cout<<2<<" ";
        }
    }
    else  cout<<-1;

    cout<<endl;
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
