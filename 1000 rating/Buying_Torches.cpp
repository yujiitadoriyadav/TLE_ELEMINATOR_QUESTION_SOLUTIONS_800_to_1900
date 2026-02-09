#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       long long  x,y,k;
        cin>>x>>y>>k;
        long long total = y*k + k-1;
        long long strade  =((total + x-2) /(x-1));
        cout<<strade +k<<endl;
       
       // cout<<ceil(total-1/(x-1)) + k<<endl;
        
    }

}