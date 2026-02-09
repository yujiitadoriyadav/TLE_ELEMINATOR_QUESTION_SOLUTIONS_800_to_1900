#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()

bool comp(const pair<int,pair<int,int>>&a , const pair<int ,pair<int ,int>>&b){
    if(a.first!=b.first){
        return a.first<b.first;
    }
    return a.second.first > b.second.first;
}
void solve() {
 int n; cin>>n;
 vector<pair<int,pair<int,int>>>v(n);
 for(int i=0;i<n;i++){
    int x,y; cin>>x>>y;
    v[i]={x,{y,i}};
 }
  sort(all(v),comp);
  int idx=-1;
  int besty =LLONG_MIN;
  for(int i=0;i<n;i++){
    int y = v[i].second.first;
    if(y<=besty){
         cout<<v[i].second.second+1<<" "<<idx+1<<endl;
        return;
        
    }
   else {
       besty =y;
        idx =v[i].second.second;
    }
  }
 cout<<-1<<" "<<-1<<endl;
  
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

