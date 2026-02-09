#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,s; cin>>n>>s;
        vector<int>a(n);
        
        for(int i=0;i<n;i++) {
            cin>>a[i];
           
        }
      
            int l =0,ans=-1;
         for(int i=0;i<n;i++){
            s-=a[i];
            while(s<0){
                s+=a[l];
                l++;
            }
            if(s==0) ans = max(ans,i-l+1);
         }
          cout<<(ans==-1?-1:n-ans)<<endl;

        
    }
}
