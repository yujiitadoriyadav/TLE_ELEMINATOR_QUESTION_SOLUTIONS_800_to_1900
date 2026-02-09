#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int mod =1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
         vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
           for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        vector<int>res(n);
        int ans=1;
        int j=0;
        for(int i=0;i<n;i++){
            while(a[j]<=b[i] && j!=n){
                j++;
            }
            if(j!=n) res[i]=n-j;
        }

        sort(res.begin(),res.end());
        for(int i=0;i<res.size();i++){
             ans=((ans%mod)*((res[i]-i)%mod))%mod;
        } 
        cout<<ans<<endl;
    }
}