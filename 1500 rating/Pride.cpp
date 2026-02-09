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
   vector<int>v(n);
   bool e=false,o=false;
   int ones=0;
   for(int i=0;i<n;i++){
      cin>>v[i];
      if(v[i]==1) ones++;
      if(v[i]%2==0) e=true;
      else o=true;
   }
   if(ones>0){
     cout<<n-ones<<endl;
     return;
   }
   if(!(e&&o)){
     cout<<-1<<endl;
  
   }
   else{
    int mini = LLONG_MAX;
    for(int i=0;i<n;i++){
      int g=v[i];
      for(int j=i+1;j<n;j++){
        g=__gcd(g,v[j]);
        if(g==1){
        mini =min(mini,j-i+1);
        break;
      }
      }
     
    }
     if(mini==LLONG_MAX){
    cout<<-1<<endl;
   }
   else{
     cout<<n+mini-2<<endl;
   }
   }
  
    

   
}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t = 1;
  //  cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

