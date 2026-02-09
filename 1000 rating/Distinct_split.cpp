#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>pref(n,0),suf(n,0);
        set<char>setu;
        for(int i=0;i<n;i++){
            setu.insert(s[i]);
            pref[i]=setu.size();
        }
        setu.clear();
        for(int i =n-1;i>=0;i--){
            setu.insert(s[i]);
            suf[i]=setu.size();
        }
        int ans =0,maxi=0;
        for(int i=0;i<n-1;i++){
            ans = pref[i]+suf[i+1];
            maxi = max(maxi,ans);
        }
        cout<<maxi<<endl;


       
    }
}