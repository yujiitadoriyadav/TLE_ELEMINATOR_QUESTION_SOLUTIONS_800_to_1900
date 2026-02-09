#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        const int MOD = 1000000007;
       long long ans = (((((n*(n+1)%MOD))*(4*n-1))%MOD)*337)%MOD;
        cout<<ans<<endl;
    }
}