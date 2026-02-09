#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
      
        long long  res =0;
        for(long long i =1;i<=n;i++){
           long long  x;
           cin>>x;
            res = __gcd(res,abs(x-i));
        }
     cout<<res<<endl;
    }
}