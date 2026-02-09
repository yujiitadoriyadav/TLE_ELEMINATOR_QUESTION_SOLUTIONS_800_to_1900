#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         long long n,k,q;
         cin>>n>>k>>q;
         long long a[n];
         int days =0;
         
         for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<=q) {
                days++;
               
            }
         }
         if(days<k){
            cout<<0<<endl;
            continue;
         }
        
        long long sum =0;
        long long curr =0;
        for(int i=0;i<n;i++){
            if(a[i]<=q){
                curr++;
            }
            else{
                if(curr>=k){
                    sum+=(curr-k+1)*(curr-k+2)/2;
                }
               curr =0;
            }
        }
          if(curr>=k){
                    sum+=(curr-k+1)*(curr-k+2)/2;
                }
         
         cout<<sum<<endl;

    }
}