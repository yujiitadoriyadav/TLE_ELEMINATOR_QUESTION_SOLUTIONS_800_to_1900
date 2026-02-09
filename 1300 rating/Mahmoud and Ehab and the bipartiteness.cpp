#include<bits/stdc++.h>
using namespace std;
vector<int>v[100005];
long long cnt[2];
void dfs(int node , int pnode , int color){
    cnt[color]++;
    for(int i=0;i<v[node].size();i++){
        if(v[node][i]!=pnode)
         dfs(v[node][i],node,!color);
      
    }
}
int main(){
   int n; cin>>n;
   for(int i=0;i<n-1;i++){
    int a, b; cin>>a>>b;
    v[a].push_back(b);
    v[b].push_back(a);
   }
   dfs(1,0,0);
   cout<<(1LL*cnt[0]*cnt[1]) -(n-1)<<endl;
}