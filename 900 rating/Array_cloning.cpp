#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long  a[n];
        map<int ,int>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
           mp[a[i]]++;
        }
        // max frequency
        int freq=0;
        for(auto i:mp){
            freq=max(freq,i.second);
        }

        int ops=0;  // operations
        while(freq<n){
            ops++;  // clone;;
         if(n>=2*freq){
            ops+=freq;
            freq=freq*2;
         }
         else{
         ops+=n-freq;
         freq=n;
         }
        }
        cout<<ops<<endl;

    }
}