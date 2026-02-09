#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        int c0=0, neg=0;
        long long sum=0;
        for(int i=0;i<n;i++){
           long long x;
           cin>>x;  
           if(x==0){
            c0++;
           }
           else if(x<0){
            neg++;
           }
           a[i]=abs(x);
           sum+=abs(a[i]);
        }
        sort(a,a+n);
         if(c0>0 || neg==0 || neg%2==0){
            cout<<sum<<endl;
            continue;
         }
        
         else if(neg%2!=0){
            cout<<sum-2*abs(a[0])<<endl;
         }


    }
}