#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
     

        int idx =-1;
        for(int i=0;i<n;i++){
         cin>>a[i];
       
        }
        vector<pair<int,int>>res;
        
        for(int i=1;i<n;i++){
            if(a[i]!=a[0]){
                idx =i;
                res.push_back({1,i+1});
            }
        }
        if(idx==-1) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(int i=1;i<n;i++){
                if(a[i]==a[0]){
                    res.push_back({idx+1,i+1});
                }
            }
            for(auto a:res){
                cout<<a.first<<" "<<a.second<<endl;
            }
        }
      
    }
}