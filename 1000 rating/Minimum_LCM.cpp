#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long  n;
        cin>>n;
        // long long mini =INT_MAX,lcm=1;
        int ans=1;
        // for(long i=1;i<=(n+1)/2;i++){
        //     long long fir = i;
        //     long long  sec =n-i;
        //     long long pro=i*(n-i);
        //     lcm =pro/__gcd(fir,sec);
        //     if(lcm<mini){
        //         mini=lcm;
        //         ans1=fir;
        //         ans2=sec;
        //     }

        // }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                ans=n/i;
                break;
            }
        }
        cout<<ans<<" "<<n-ans<<endl;
    }
}