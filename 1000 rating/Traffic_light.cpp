#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int  n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        if(c=='g'){
            cout<<0<<endl;
            continue;
        }
      
      
        s+=s;
      int  maxi =0,cnt=0;
      for(int  i=0;i<s.size();i++){
        if(s[i]==c){
          cnt=0;
          while(s[i]!='g' && i<s.size()){
            cnt++;
            i++;
          }
          if(cnt>maxi) maxi =cnt;
        }
      }
        cout<<maxi<<endl;
    }
}