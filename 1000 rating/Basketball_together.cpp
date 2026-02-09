#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  n,d;
    cin>>n>>d;
      long long a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      sort(a,a+n);
      long t=0;
      int count=0;
      long start=0,end=n-1;
      while(start<=end &&t<n){
          int c = d/a[end];
          if(c ){
            t+=c+1;
            if(t>n) break;
            end--;
            start+=c;
            
            count++;
          }
          else{
            t+=1;
            end--;
          
            count++;
          }
      }
      cout<<count<<endl;
}