#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
      map<char,int>mp;
      int n = s.size();
      for(int i=0;i<n;i++){
        mp[s[i]]++;
      }  
      if(mp.size()==1)  {
        cout<<"YES"<<endl;
        continue;
        }
      bool flag =true;
      for(int i=0;i<n;i++){
         if(s[i]!=s[i%mp.size()])
         flag =false;


      }
      if(flag) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
}