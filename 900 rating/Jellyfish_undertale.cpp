#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long  a,b,n;
        cin>>a>>b>>n;
         long long arr[n];
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        long long ans=0;
        for(long long i=0;i<n;i++ ){
            ans+=min(a-1,arr[i]);
           

            
        }
        cout<<ans+b<<endl;
    }
}