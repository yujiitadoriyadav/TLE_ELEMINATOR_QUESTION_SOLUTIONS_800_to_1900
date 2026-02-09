#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
          string s;
          cin>>s;
          int c0=0,c1=0;
          if(s.size()==1) {
            cout<<1<<endl;
             continue;
          }
          int n = s.size();
          for(int i=0;i<n;i++){
                  if(s[i]=='0'){
                    c0++;
                  }
                  else c1++;
          }
          int i=0;
     for(i=0;i<n;i++){
        if(s[i]=='1') {
            if(c0>0) 
             c0--;
            else
             break;
        }
        else{
            if(c1>0)
             c1--;
            else 
            break;
        }
     }
     cout<<n-i<<endl;
    }
}