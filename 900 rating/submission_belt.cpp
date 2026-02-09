#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++){
            a[i]=0;
        }
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            ++a[x];
        }
        bool flag =true;
        for(int i=1;i<=n;i++){
            if(a[i]%2==1){
               flag = false;

            }

        }
        if(flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
    //     int maxi =0;
    //     for(int i=0;i<n;i++){
    //        cin>>a[i];
    //        maxi=max(maxi,a[i]);
    //     }
    //     int c=0;
    //     for(int i=0;i<n;i++){
    //         if(a[i]==maxi){
    //             c++;
    //         }
    //     }
    //     if(c%2==0) cout<<"NO"<<endl;
    //     else cout<<"YES"<<endl;
    // }
      
    }
}