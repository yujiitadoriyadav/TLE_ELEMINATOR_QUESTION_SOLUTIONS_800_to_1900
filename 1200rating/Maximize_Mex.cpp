#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        long long a[n];
       
        long long maxi=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
         
        }
        sort(a,a+n);
        if(a[0]!=0){
            cout<<0<<endl;
            continue;
        }
        int rep =-1;
        int ans =0;
        for(int i=0;i<n;i++){
           if(ans!=a[i]){
             if(a[i]==a[i-1]){
                  rep=a[i];
              }
              else if(rep%x == a[i]%x){
                ans++;
              }
              else if(a[i]!=a[i-1]){
                  cout<<ans<<endl;
                  continue;
              }
              
           }
           else{
            ans++;
           }
        }
     
       cout<<ans<<endl;

    }
}
