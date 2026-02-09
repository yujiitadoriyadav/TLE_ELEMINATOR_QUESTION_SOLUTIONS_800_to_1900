#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++){
           cin>>a[i];
        }
        int ans =0;

        // dono ki duri barabar honi chahiye ==mod
      
        for(int i=1;i<=n/2;i++){
            ans =__gcd(ans,abs(a[i]-a[n-i+1]));
        }
        cout<<ans<<endl;
    }
}