#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        ll n,x,y; cin>>n>>x>>y;

        // sabse jaroori -- ho skata ho index dono se divisible ho 
        ll c =n/lcm(x,y) ;
        ll a =n-n/x+c ; // n/x -c then a*(2n - a+1)/2
        ll b = n/y-c;
        cout<<(n*(n+1)-a*(a+1) -b*(b+1))/2<<endl;
        
      
    }
}