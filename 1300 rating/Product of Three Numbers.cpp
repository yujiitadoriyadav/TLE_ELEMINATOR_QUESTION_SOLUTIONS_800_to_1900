#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        set<int> ans;
       
        for(int i=2;i*i<=n;i++){
            if(n%i==0 && !ans.count(i)){
               ans.insert(i);
                n =n/i;
                break;
            }
        }
       
        for(int i=2;i*i<=n;i++){
            if(n%i==0 &&!ans.count(i)){
               ans.insert(i);
                n =n/i;
                break;
            }
        }
       
       
       
        if(ans.size()<2 || ans.count(n) || n==1){
            cout<<"NO"<<endl;
            
        }
        else{
            cout<<"YES"<<endl;
            ans.insert(n);
            for(auto mp:ans){
                cout<<mp<<" ";
            }
            cout<<endl;
        }
    }
}