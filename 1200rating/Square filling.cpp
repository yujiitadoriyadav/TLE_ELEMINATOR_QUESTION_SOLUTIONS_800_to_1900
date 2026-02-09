
#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
const int mod=998244353;
int a[51][51],b[51][51];

void solve() {
   int n,m;
	cin>>n>>m;
	for(int i=0;i<n;++i) {
		for(int j=0;j<m;++j) {
			cin>>a[i][j];
		}
	}
	
	vector<pair<int,int>> ans;
	for(int i=0;i<n;++i) {
		for(int j=0;j<m;++j) {
			if(i+1<n && j+1<m && a[i][j]+a[i+1][j]+a[i][j+1]+a[i+1][j+1]==4) {
				ans.emplace_back(i+1, j+1);
				b[i][j]|=1;
				b[i][j+1]|=1;
				b[i+1][j+1]|=1;
				b[i+1][j]|=1;
			}
		}
	}
	
	bool ok=true;
	for(int i=0;i<n;++i) {
		for(int j=0;j<m;++j) {
			ok&=a[i][j]==b[i][j];
		}
	}
	
	if(ok) {
		cout<<ans.size()<<"\n";
		for(auto i:ans) cout<<i.first<<" "<<i.second<<"\n";
	}else cout<<"-1";
	
}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t = 1;
   // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

