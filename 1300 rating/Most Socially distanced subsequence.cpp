#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>a(n),ans;
        for(int i=0;i<n;i++) cin>>a[i];
        ans.push_back(a[0]);
        int c=0;
        for(int i=1;i<n-1;i++){
            if((a[i-1]<a[i])!=(a[i]<a[i+1])){
                ans.push_back(a[i]);
            }
        }
        ans.push_back(a[n-1]);
        int m = ans.size();
        cout<<m<<endl;
        for(int i=0;i<m;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}