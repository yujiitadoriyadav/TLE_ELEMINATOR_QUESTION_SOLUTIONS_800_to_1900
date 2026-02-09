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

 int n,m ; 
vector<vector<int>> a;
int mn[1010][1010],mx[1010][1010];

void solve(){
cin>>n>>m;
 a.assign(n,vector<int>(m,0));
for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
        mn[i][j] = 1e9, mx[i][j] = -1e9;



 for(int i=0;i<n;i++){
   for(int j=0;j<m;j++){
    cin>>a[i][j];
   }
 }
 mn[0][0]=mx[0][0] =a[0][0];

 if((n+m-1)%2){
    cout<<"NO"<<endl;
    return;
 }

 for(int i=1;i<n;i++){
    mx[i][0] =mn[i][0] =mx[i-1][0]+a[i][0];
 }
  for(int i=1;i<m;i++){
    mx[0][i] =mn[0][i] =mx[0][i-1]+a[0][i];
 }

 for(int i=1;i<n;i++){
    for(int j=1;j<m;j++){
        mx[i][j] = max(mx[i-1][j],mx[i][j-1]) + a[i][j];
        mn[i][j] = min(mn[i-1][j],mn[i][j-1]) + a[i][j];
        

    }
 }

 if(mn[n-1][m-1]>0  || mx[n-1][m-1]<0){
    cout<<"NO"<<endl;
    return;
 }
 cout<<"YES"<<endl;


 
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

