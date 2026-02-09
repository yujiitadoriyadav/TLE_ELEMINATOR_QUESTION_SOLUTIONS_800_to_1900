#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        bool flag=false;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                flag =true;
            }
        }
        int maxi=0,ans=0;
        for(int i=1;i<n;i++){
             if(a[i]==a[i-1] && a[i]==0){
                maxi++;
                if(maxi>ans){
                    ans=maxi;
                }
             }
            else
            maxi=0;
        }
        if(flag){
            if(ans)
            cout<<ans+1 <<endl;
            else
            cout<<1<<endl;  
        }
        else
        cout<<0<<endl;
    }
}