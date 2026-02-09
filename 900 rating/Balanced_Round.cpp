#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int maxi=0;
        int curr =0;

        for(int i=1;i<n;i++){
               if(a[i]-a[i-1]<=k){
                 curr++;

               }
               else{
                    maxi = max(curr,maxi);
                    curr=0;
               }
        }
        maxi = max(curr,maxi);
        cout<<n-maxi-1<<endl;
    }
}