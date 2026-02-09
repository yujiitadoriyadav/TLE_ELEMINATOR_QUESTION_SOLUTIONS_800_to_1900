#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int maxi=INT_MIN;
        int index;
        for(int i=1;i<=n;i++){
            cin>>a[i];
         if(maxi<a[i]){
             index =i;
             maxi=a[i];

         }

        }
        // if(n%2==0){
        //     for(int i=0;i<n/2;i++){
        //          a[i]=a[i]&a[n-1-i];
        //          a[n-1-i]=a[i];
        //     }
        // }
        // else{
        //     for(int i=1;i<=n/2;i++){
        //            a[i]=a[i]&a[n-i];
        //            a[n-i]=a[i];
        //     }
        // }
        int res=a[1];
        for(int i=2;i<=n;i++) res&=a[i];

        cout<<res<<endl;
        

    }
    
    }