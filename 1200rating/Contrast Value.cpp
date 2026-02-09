#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        n =unique(a.begin(),a.end())-a.begin();
        int ans =n;
        for(int i=0;i+2<n;i++){
          if(a[i]<a[i+1] && a[i+1]<a[i+2]) ans--;
          if(a[i]>a[i+1] && a[i+1]>a[i+2]) ans--;
        }
       cout<<ans<<endl;
    }
}