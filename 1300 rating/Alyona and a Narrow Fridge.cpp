#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,h; cin>>n>>h;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll ans =0;
     for(int i=0;i<n;i++){
        vector<int>temp(a.begin(),a.begin()+i+1);
        sort(temp.rbegin(),temp.rend());
        ll rh =0;
        for(int j=0;j<temp.size();j+=2){
            rh+=temp[j];
        }
        if(rh<=h){
            ans =i+1;
        }
        else break;
     }
    cout<<ans<<endl;
}


