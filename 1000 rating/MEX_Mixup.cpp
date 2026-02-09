#include<bits/stdc++.h>
using namespace std;
int xorx(int n){
    if(n%4==0) return n;
    if(n%4==1) return 1;
    if(n%4==2) return n+1;
    return 0;   // n%4==3
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
       int ans = xorx(a-1); 
       if(a==b && a==1){
        cout<<3<<endl;
        continue;
       }
       if(ans==b){
        cout<<a<<endl;
        continue;
       }
       if((ans^b)!=a){
        cout<<a+1<<endl;
       }
       else {
        cout<<a+2<<endl;
        continue;
       }
    }
}