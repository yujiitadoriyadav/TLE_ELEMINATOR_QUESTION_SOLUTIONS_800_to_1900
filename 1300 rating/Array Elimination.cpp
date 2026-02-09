#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()

// kya be chhote gend pe padenge shote 

void solve() {
   int n ; cin>>n;
   vector<int>a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   unordered_map<int,int>mp;
   for(int i=0;i<30;i++){
    for(int j=0;j<n;j++){
        if((a[j]>>i)&1 ){
            mp[i]++;
        }
    }
   }
   vector<int>ans;
   ans.push_back(1);
   for(int i=2;i<=n;i++){
    bool flag = true;
    for(auto a:mp){
        if(a.second%i!=0){
            flag = false;
        }
       
    }
    if(flag) ans.push_back(i);

   }
 for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
 }
 cout<<endl;

}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
