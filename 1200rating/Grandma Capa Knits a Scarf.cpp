#include<bits/stdc++.h>
using namespace std;
// mein ne teepa hai tu kyo teep raha hai ? 
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        int ans = n+1;
        for(int a =0;a<26;a++){
            int l =0,r=n-1,cnt =0;
            while(l<=r){
                if(s[l]==s[r]){
                    l++; r--;
                }
              
               else  if(s[l]==a + 'a'){
                    cnt++;l++;
                }
               else if(s[r]==a+ 'a'){
                    cnt++; r--;
                }
               
               else{
                cnt = n+1;
                break;
               }
            }
            ans = min(ans,cnt);
        }
        if(ans==n+1) cout<<-1<<endl;
        else cout<<ans<<endl;

    }
}