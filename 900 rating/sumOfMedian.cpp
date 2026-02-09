#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         long long n,k;
         cin>>n>>k;
         long long a[n*k];
         for(int i=0;i<n*k;i++){
            cin>>a[i];
         }
         
         long long int  sum=0;
        long long x = n*k;
        while(k--){
          x = x- (n/2+1);
         sum+=a[x];
        }
         
         cout<<sum<<endl;

         }
         }