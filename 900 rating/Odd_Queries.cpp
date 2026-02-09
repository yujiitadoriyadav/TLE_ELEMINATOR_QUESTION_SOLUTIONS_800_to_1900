#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<long long>a(n+1);
         vector<long long>pref(n+1,0);
        
        for(int i=1;i<=n;i++){
            cin>>a[i];
           pref[i]=pref[i-1]+a[i];
        }
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
              long long currsum=pref[n];
              long long range=pref[r]-pref[l-1];
              long long sum = currsum - range + (r-l+1)*k;
            
            if(sum%2!=0){
                cout<<"YES"<<endl;
            }
            else
            cout<<"NO"<<endl;
        }
    }
}