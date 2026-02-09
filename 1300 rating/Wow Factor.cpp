#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string s; cin>>s;
    string ans="";
    int cw=0,co=0;
    for(int i=0;i<s.size();i++){
         if(s[i]=='v' && i+1<s.size() && s[i+1]=='v'){
            ans+='w';
            cw++;
         }
         else if(s[i]=='o'){
            ans+='o';
            co++;
         }
    }
    int fw=0;
    ll res=0;
    for(int i=0;i<ans.size();i++){
          if(ans[i]=='o'){
            res+=1LL*fw*(cw-fw);
          }
          else if(ans[i]=='w'){
            fw++;
          }
    }
    cout<<res<<endl;
}