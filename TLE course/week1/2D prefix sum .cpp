#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cin>>v[i][j]; 
        }
    }
    vector<vector<int>>pref(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            // pref[i][j]=pref[i][j-1]+pref[i-1][j]-pref[i-1][j-1]+v[i][j];
            pref[i][j]=v[i][j];
            if(j>0) pref[i][j]+=pref[i][j-1];
            if(i>0)  pref[i][j]+=pref[i-1][j];
            if(i>0 && j>0) pref[i][j]-=pref[i-1][j-1];

        }
    }
    int q;
    cin>>q;
    while(q--){
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        int ans=0;
        ans =pref[l2][r2];
      if(l1>0) ans-=pref[l1-1][r2];
      if(r1>0)  ans-=pref[l2][r1-1];
      if(l1>0 && r1>0) ans+= pref[l1-1][r1-1];
      cout<<ans<<endl;
        //ans = pref[l2][r2]-pref[l1-1][r2]-pref[l2][r1-1]+pref[l1-1][r1-1];
    }
}



// q1 given an array of n elemnts answer the following queries 
// query - l ,r;
//result = a[l]+ 2*a[l+1] + 3* a[l+2] + .... (r-l+1)*a[r];
//      ex  a = [2 4 3 6 9]
//          q = [2,4]
///    a[2] + 2*a[3] + 3*a[4]
/// 

//
  void solve(){
    int n;
    cin>>n;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++) cin>>v[i];
    vector<int>pre1(n+1,0),pre2(n+1,0);
    for(int i=1;i<=n;i++){
        pre1[i]=pre1[i-1]+(i*v[i]);
        pre2[i]=pre2[i-1] + v[i];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
       cout<<(pre1[r]-pre1[l-1])-(l-1)*(pre2[r]-pre2[l-1])<<" ";

    }
    cout<<endl;

  }

  // contiguous array equal number of 0 and 1 
  // ex nums=[0,1]  ans = 2;
   void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<int,int>mp;
    int ans =0;
      int sum =0;
      for(int i=0;i<n;i++){
        if(v[i]==0) sum-=1;
        else sum+=1;
        if(sum==0){
            ans=max(i+1,ans);
        }
        else{
            if(mp.find(sum)!=mp.end()){
                ans = max(ans,i-mp[sum]);
            }
            else{
                mp[sum]=i;
            }
        }
      }
      return ans;
   }