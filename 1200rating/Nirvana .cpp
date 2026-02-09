#include<bits/stdc++.h>
using namespace std;
#define ll long long 
// assan lag raha tha accha question ;';';
ll prod(ll n){
    ll prod =1;
    while(n>0){
        prod*=(n%10);
        n/=10;
    }
    return prod;
}
int main(){
    int  n; cin>>n;
    ll maxi =prod(n);
    ll m = n, fact=1;
    while(m>0){
        // piche walo ko 0 me badal akr 9 mein laa raha hai 
        // 3467 - 3399 if fact =100 ;
        ll newi = (n/(fact*10))*(fact*10)-1;
       if(newi>0){
        maxi = max(maxi,prod(newi));
       }
       fact*=10;
       m/=10;
    }
    cout<<maxi<<endl;


    
}