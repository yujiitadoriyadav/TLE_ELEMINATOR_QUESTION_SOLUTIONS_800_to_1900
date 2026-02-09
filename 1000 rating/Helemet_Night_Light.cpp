#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
           int x ;
           cin>>x;
           v.push_back(make_pair((min(x,p)),a[i]));
        }
        int ans=p;
        int  rem =n-1;
        for(int i=0;i<n;i++){
            ans+=min(v[i].second,rem)*v[i].first;
            rem-=min(v[i].second,rem);
        }
        cout<<ans<<endl;

    }
}
