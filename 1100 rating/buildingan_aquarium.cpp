#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        ll a[n];
        for(ll i=0;i<n;i++) cin>>a[i];
        ll l =1,r=1e10;
      
        while(l<=r){
            ll total =0;
            ll mid = l+(r-l)/2;
            for(int i=0;i<n;i++){
                if(a[i]<mid){
                    total+= mid - a[i];
                }
               
            }
           
             if(total>x){
                
                r=mid-1;
            }
            else{
                l =mid+1;
            }
        }
       cout<<l-1<<endl;
    }
}