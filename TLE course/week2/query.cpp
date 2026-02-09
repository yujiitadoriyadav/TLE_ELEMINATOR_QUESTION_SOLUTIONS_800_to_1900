#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n),x(n+1);
        
        for(int i=0;i<n;i++) cin>>a[i];
        x[0]=a[0];
        for(int i=0;i<n;i++){
             x[i]=x[i-1]^a[i];
        }
        int q;
        cin>>q;

        while(q--){
            int l,r;
            cin>>l>>r;
            l--;r--;
            cout<<x[r]^(l==0?0:x[l-1])<<endl;
        }
    }
}