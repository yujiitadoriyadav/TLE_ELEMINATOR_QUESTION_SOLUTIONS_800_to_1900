#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,b,s;
        cin>>n>>k>>b>>s;
       if(s<b*k ||  s> ( (k-1)*n+ k*b ) ){
        cout<<-1<<endl;
        continue;
       } 
     vector<long long >v(n,0);
     long long sum=b*k;
    
     
      v[0]=k*b;
      for(int i=1;i<n;i++){
        long long  add =min(s-sum , k-1);
        v[i]=add;
        sum+=add;
      }
      v[0]+=s-sum;

      for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
      }
      cout<<endl;
        

    

    }
}