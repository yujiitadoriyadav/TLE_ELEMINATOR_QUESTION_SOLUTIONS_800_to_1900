#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<vector<int>>v(n+1,vector<int>(n+1));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) {
            char ch;
            cin>>ch;
            if(ch=='*')
              v[i][j]=1;
           else v[i][j]=0;
         }
    }
    vector<vector<int>>pref(n+1,vector<int>(n+1));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            pref[i][j]=v[i][j];
            if(j>1) pref[i][j]+=pref[i][j-1];
            if(i>1)  pref[i][j]+=pref[i-1][j];
            if(i>1 && j>1) pref[i][j]-=pref[i-1][j-1];
        }
    }
   while(q--){
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        int ans=0;
        ans =pref[l2][r2];
      if(l1>1) ans-=pref[l1-1][r2];
      if(r1>1)  ans-=pref[l2][r1-1];
      if(l1>1 && r1>1) ans+= pref[l1-1][r1-1];
      cout<<ans<<endl;
        //ans = pref[l2][r2]-pref[l1-1][r2]-pref[l2][r1-1]+pref[l1-1][r1-1];
    }

}