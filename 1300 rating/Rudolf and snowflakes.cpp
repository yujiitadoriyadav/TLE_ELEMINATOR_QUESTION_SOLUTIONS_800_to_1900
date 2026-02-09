#include<bits/stdc++.h>
#define ll long long
using namespace std;
//haan tera hi teepa hai 
bool check(ll n){
    for(ll k=2;k*k<=n;k++){
        ll val = 1+k;
        ll prod=k*k;
        while(val<n){
            val+=prod;
           
            prod*=k;
            if(val==n) return true;
        }
     
    }
    return false;
}
int main(){

    int t;
    cin>>t;
    while(t--){
    ll n; cin>>n;
    if(check(n)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
}