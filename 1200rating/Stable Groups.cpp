#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,k,x;  cin>>n>>k>>x;
    vector<ll>a(n),b(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    ll ans =1;
    for(ll i=1;i<n;i++){
     b[i-1]=a[i]-a[i-1];
    }
    sort(b.begin(),b.end());
    for(int i=1;i<n;i++)
    {
       if(b[i]>x){
        if(k>=(b[i]-1)/x) k-=(b[i]-1)/x;
        else ans++;
       }
      
    }    
    cout<<ans<<endl;
}