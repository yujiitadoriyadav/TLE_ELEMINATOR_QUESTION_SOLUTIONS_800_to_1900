#include<bits/stdc++.h>
using namespace std;
long m;
// int mul(long a ,long  b){
//     return (1LL*a*b)%m;
// }
int main(){

        long n;
        cin>>n>>m;
        long long  a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n>m){
            cout<<0<<endl;
            
        }
        else{
        long long prod=1;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                   prod =( prod*abs(a[i]-a[j]))%m;
            }
        }
        cout<<prod<<endl;
        }
}


