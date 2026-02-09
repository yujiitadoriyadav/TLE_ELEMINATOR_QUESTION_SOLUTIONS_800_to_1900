#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
const int mod =1e9+7;
vector<int>p;
int find(int x){
  if(p[x]!=x){
    p[x] =find(p[x]);
  }
  return p[x];
}
void solve() {
 int n,m; cin>>n>>m;
 p.resize(n);
 vector<int>a(n),s(n,0);
 for(int i=0;i<n;i++)
   p[i]=i;
  while(m--){
    int  k;
     cin>>k;
     for(int i=0;i<k;i++){
      cin>>a[i];
      a[i]--;
      p[find(a[i])]=find(a[0]);
     }
   }
   for(int i=0;i<n;i++){
    s[find(i)]++;
   }
   for(int i=0;i<n;i++){
    cout<<s[find(i)]<<" ";
   }
  cout<<endl;
 }


int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

