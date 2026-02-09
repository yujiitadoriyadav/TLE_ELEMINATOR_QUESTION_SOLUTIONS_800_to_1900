#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       long long  a[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
       } 
       long long  c1=0,c0=0;
       for(int i=0;i<n;i++){
        if(a[i]==0){
            c0++;
        }
        if(a[i]==1) c1++;
       }
    // it give error for limit cout<<pow(2,c0)*c1<<endl;
       cout<< ( 1ll<<c0) * c1<<endl; 
       
    }
}