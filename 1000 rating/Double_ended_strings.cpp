#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
      if(a==b){
        cout<<0<<endl;
        continue;
      }  
      int n = a.size(),i=0;
      int m=b.size(),j=0;
      
      int maxi=0;
   for(int len =1;len<=min(n,m);len++){
    for(int i=0;i+len<=n;i++){
        for(int j=0;j+len<=m;j++){
            if(a.substr(i,len)==b.substr(j,len)){
                maxi =max(maxi,len);
            }
        }
    }
   }
   
      cout<<(n+m)-2*maxi<<endl;
    }
}