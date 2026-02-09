#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long>v(n);
    for(auto &e:v){
        cin>>e;
    }
    long long  count=0;
    unordered_map<long long ,long long >mp;
    long long pref=0;
    mp[0]=1;
    for(int i=0;i<n;i++){
        pref+=v[i];
       long long mod = ((pref%n)+n)%n;
       if(mp[mod]){
        count+=mp[mod];
       } 
       mp[mod]++;
    }
  cout<<count<<endl;

}