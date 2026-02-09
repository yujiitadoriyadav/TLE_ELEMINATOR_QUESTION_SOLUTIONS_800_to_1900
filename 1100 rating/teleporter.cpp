#include<bits/stdc++.h>
using namespace std;
bool comp(pair<long long , long long >a,pair<long long , long long >b){
    return (a.first + a.second )<=(b.first + b.second);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,c;
        cin>>n>>c;
        vector<pair<long long ,long long>>m;
        long long x;
        for(int i=0;i<n;i++){
            cin>>x;
            m.push_back({x,i});
        }
        int count=0;
        sort(m.begin(),m.end(),comp);
      for(auto i:m){
        
        if((i.first + i.second+1)<=c){
            count++;
            c-=(i.first+i.second+1);
        }
      }
      cout<<count<<endl;

    }
}