#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int s =n*(n-1)/2;
        vector<ll>b(s);
        for(int i=0;i<s;i++) cin>>b[i];
        sort(b.begin(),b.end());
        vector<ll>ans(n);
        int i=0;
        int pref =0;
        while(i<n-1){
          
            if(pref<s) ans[i]=b[pref];
            pref+=n-i-1;
            i++;
        }
        ans[n - 1] = ans[n - 2]; 
      for(int  i=0;i<n;i++){
        cout<<ans[i]<<" ";
      }
      cout<<endl;
    }
}