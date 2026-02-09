#include<bits/stdc++.h>
#define ll long long 
using namespace std;
ll solve(ll n){
    ll maxi =1;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
           maxi = max(maxi,n/i);
        }
    }
    return maxi;
}
int main(){
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        if(n%2==0){
            cout<<n/2<<" "<<n/2<<endl;
        }
        else{
            ll ans = solve(n);
            cout<<ans<<" "<<n-ans<<endl;
            }
            
        }
        

    }
