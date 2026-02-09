#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>x(n),y(n,0),z(n);
        for(int i=0;i<n;i++) cin>>x[i];
         y[0]=0;
         z[0]=x[0];
        for(int i=1;i<n;i++){
           y[i]=(z[i-1] & ~x[i]);
           z[i]=x[i]^y[i];
        }
         for(int i=0;i<n;i++) cout<<y[i]<<" ";
         cout<<endl; 
    }
}