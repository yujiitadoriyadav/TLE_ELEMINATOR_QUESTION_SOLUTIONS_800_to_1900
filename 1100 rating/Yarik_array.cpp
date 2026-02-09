#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    int n ;
    cin>>n;
    int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   if(n==1){
    cout<<a[0]<<endl;
    continue;
   }
    int ans=a[0],sum=a[0];
    int mini = min(0,a[0]);
    
    for(int i=1;i<n;i++){
     
         if(abs(a[i]%2)==abs(a[i-1]%2)){
           mini=0;
            sum=0;
         }
           sum+=a[i];
            ans=max(ans,sum-mini);
            mini=min(mini,sum);
        
    }
    cout<<ans<<endl;
   }
}