#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n,x,m; cin>>n>>x>>m;
   
    ll re =x,le=x;
    while(m--){
        ll l,r; cin>>l>>r;
      if((r >= le && l <= re)){
        re =max({re,l,r});
        le =min({le,l,r});
      }
    
      
    }
    cout<<re-le+1<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
     solve();
        
    }
}