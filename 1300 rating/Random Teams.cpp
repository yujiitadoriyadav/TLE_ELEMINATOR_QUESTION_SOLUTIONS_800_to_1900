#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,m; cin>>n>>m;
    ll maxit =n-(m-1);
     ll k_max = (maxit *(maxit-1))/2;
     
    ll base = n/m;
    ll extra = n%m;
    ll k_min = (m-extra)*(base*(base-1))/2 + extra*(base*(base+1))/2; 
    
    cout<<k_min<<" "<<k_max<<endl;
}