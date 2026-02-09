#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
       int ans =INT_MIN;
       for(int i=1;i<n;i++){  // minimum pahele hai
        ans = max(a[i]-a[0],ans);
       }
      for(int i=0;i<n-1;i++){  // max akhir mai hai
            ans = max(ans,a[n-1]-a[i]);
      }
      for(int i=0;i<n;i++){
        ans = max(ans,a[(i-1+n)%n]-a[i]);
      }
      cout<<ans<<endl;
    }
}