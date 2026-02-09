#include<bits/stdc++.h>
using namespace std;
int main(){
   int t; cin>>t;
   while(t--){
     long long  n,k;
    cin>>n>>k;
    long long mult =(n+k-1)/k;
    k*=mult;
   
      long long a =(k+n-1)/n;
      
      cout<<a<<endl;
    
    
   }

}