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
  int n; cin>>n;
  vector<int>a(n),neg,pos;
  for(int i=0;i<n;i++){
     cin>>a[i];
     if(a[i]<0) neg.pb(a[i]);
     else pos.pb(a[i]);
  }
  if(neg.size()==0) {
    cout<<"No"<<endl;
    return;
  }
  int maxi =*max_element(a.begin(),a.end());
  int mini = *min_element(a.begin(),a.end());
  sort(all(neg));
  sort(all(pos),greater<int>());
  int s = maxi-mini;
  // cout<<s<<endl;
  int i=0,j=0;
  int sum =0;
  vector<int>ans;
  while(i<pos.size() && j<neg.size()){
     while(i<pos.size() && sum+pos[i] < s){
        ans.push_back(pos[i]);
        sum+=pos[i];
        i++;
     }
     sum+=neg[j];
     ans.push_back(neg[j]);
     j++;
     

  }
  while(i<pos.size()){
          ans.push_back(pos[i]);
        i++;
  }
  while(j<neg.size()){
    ans.push_back(neg[j]);
     j++;
  }
  cout<<"Yes"<<endl;
for(int i=0;i<ans.size();i++){
     cout<<ans[i]<<" ";
}
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

