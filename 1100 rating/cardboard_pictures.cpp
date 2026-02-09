#include<bits/stdc++.h>
#define int long long 
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long c;
        cin>>c;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
       int l=1 , r = 1e9;
      int ans =-1;
      while(l<=r){
        int mid = l + (r-l)/2;
        int  sum=0;
       for(int i=0;i<n;++i){
            sum += (2*mid + a[i])*(2*mid + a[i]);
          if(sum>c){
            break;
            }
        }
        if(sum==c){
         ans =mid;
            break;
        }
        else if(sum<c){
            l =mid+1;
        }
        else{
            r = mid-1;
        }
      }
     cout<<ans<<endl;

    }
    return 0;
}