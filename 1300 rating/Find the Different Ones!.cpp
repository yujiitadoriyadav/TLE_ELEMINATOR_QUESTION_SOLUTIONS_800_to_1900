#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>a(n),p(n,-1);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=1;i<n;i++){
            p[i]=p[i-1];
            if(a[i]!=a[i-1]){
                p[i]=i-1;
            }
        }
        int q; cin>>q;
        while(q--){
            int l,r; cin>>l>>r;
            
            l--; r--;
            if(p[r]<l) cout<<-1<<" "<<-1<<endl;
            else{
                cout<<p[r]+1<<" "<<r+1<<endl;
            }
            
        }
        cout<<endl;
    }
}