#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r;
        cin>>n>>r;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count=0;
        int c1=0;
       for(int i=0;i<n;i++){
            count+=a[i]/2;
             if(a[i]%2!=0){
                a[i]=1;
                c1++;
             }
             else 
             a[i]=0;
       }
       r= r-count;
       count=count*2;
      if(r>c1){
        count+=c1;
      }
      else{
          while(c1<2*r){
            c1--;
            count++;
            r--;
          }
      }
       cout<<count<<endl;
    }
}