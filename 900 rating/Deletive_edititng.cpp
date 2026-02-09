#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s,t;
        cin>>s>>t;
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        for(int i=0;i<s.size();i++){
            v1[s[i]-'A']++;
        }
           for(int i=0;i<t.size();i++){
            v2[t[i]-'A']++;
        }
        int i  =s.size()-1;
        int j=t.size()-1;
        string ans="";
     while(i>=0 && j>=0){
        if(s[i]==t[j]){
            v1[s[i]-'A']--;
              v2[s[i]-'A']--;
              ans=s[i]+ans;
            i--;
            j--;
           
        }
        else if(v2[s[i]-'A'] && s[i]!=t[j] ){
           
            v1[s[i]-'A']--;
            v2[s[i]-'A']--;
            ans=s[i]+ans;
             i--;
        }
        else{
            i--;
        }
     }
        // cout<<ans<<endl;
      if(ans==t){
        cout<<"YES"<<endl;
      }
      else
      cout<<"NO"<<endl;
    }
}