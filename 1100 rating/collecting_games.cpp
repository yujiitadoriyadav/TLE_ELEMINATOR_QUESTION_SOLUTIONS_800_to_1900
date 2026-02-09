#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       long long  n;
       cin>>n;
       vector< long long>a(n),b(n),psum(n);
       for( long long i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];

       }

       sort(b.begin(),b.end());
       psum[0]=b[0];
       for( long long i=1;i<n;i++){
        psum[i]=psum[i-1]+b[i];
       }
       map< long long, long long>mp;
       mp[b[n-1]]=n-1;
       for( long long i=n-2;i>=0;i--){
        if(psum[i]>=b[i+1]){
            mp[b[i]]=mp[b[i+1]];
        }
        else{
            mp[b[i]]=i;
        }
       }
       for(auto i:a){
          cout<<mp[i]<<" ";
       }
       cout<<endl;
    }
}


