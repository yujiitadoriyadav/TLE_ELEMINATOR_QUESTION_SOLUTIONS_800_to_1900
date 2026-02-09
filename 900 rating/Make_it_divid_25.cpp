#include<bits/stdc++.h>
using namespace std;
int solve(string &n , string &s){
    int size = n.size()-1;

    int ans=0;
    while(size>=0  && n[size]!=s[1]){
        size--;
        ans++;
    }
    if(size<0) return 100;
    size--;
    while(size>=0 && n[size]!=s[0]){
        size--;
        ans++;
    }

    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
       string n;
       cin>>n;
       int ans = 100;
       string s[] = {"00" ,"25","50","75" };
       for(int i=0;i<4;i++){
            ans = min(ans,solve(n,s[i]));
       }
       cout<<ans<<endl;

    }
}