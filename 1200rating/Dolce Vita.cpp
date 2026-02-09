#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        ll  x; cin>>x;
        vector<ll>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        ll sum =0;
        for(int i=0;i<n;i++){
            sum+=a[i];

        }
        ll prev =-1;
        ll ans =0;
        for(int i=n-1;i>=0;i--){
            ll curr =(x-sum>=0)?(x-sum)/(i+1):-1;
            ans+=(i+1)*(curr-prev);
            prev = curr;
            sum-=a[i];
        }
        cout<<ans<<endl;
    }
}