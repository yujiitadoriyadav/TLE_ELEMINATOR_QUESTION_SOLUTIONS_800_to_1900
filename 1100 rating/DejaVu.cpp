#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         long long n,q;
        cin>>n>>q;
        long long a[n];
        long long x[q];
        
        for( long long i=0;i<n;i++){
            cin>>a[i];    
        }
        for( long long i = 0;i<q;i++){
            cin>>x[i];
        }
        set<long long>st;
       for(long long i=0;i<q;i++){
        if(st.count(x[i])) continue;
        st.insert(x[i]);
        for(long long j=0;j<n;j++){
            if(a[j]%(1<<x[i])==0 ){
                a[j]+=(1<<(x[i]-1));
            }
        }
       }

       for(long long  i=0;i<n;i++){
         cout<<a[i]<<" ";
       }
       cout<<endl;
 
    }
    
}