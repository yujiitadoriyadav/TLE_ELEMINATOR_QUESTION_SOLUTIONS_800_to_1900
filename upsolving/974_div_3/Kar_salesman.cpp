#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  t;
    cin>>t;
    while(t--){
        long long    n,x;
        cin>>n>>x;
        vector<long long >a(n);
        long long  sum =0;
        long long  maxi=0;
        for(long long  i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            maxi = max(maxi,a[i]);
        }
        
        long long  ans =(sum +x-1)/x;
        cout<<max(maxi,ans)<<endl;;
        }

    }

