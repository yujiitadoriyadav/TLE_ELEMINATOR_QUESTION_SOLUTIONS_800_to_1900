// 1775 B 
#include<bits/stdc++.h>
using namespace std;
void solve (){
    
        int n; cin>>n;
        vector<vector<int>>a(n);
        map<int ,int>freq;
        for(int i=0;i<n;i++){
           int k; cin>>k;
           a[i].resize(k);
           for(int j=0;j<k;j++){
            cin>>a[i][j];

            --a[i][j];
            ++freq[a[i][j]];
           }
        }
        for(int i =0;i<n;i++){
            bool find =false;
            for(int j=0;j<a[i].size();j++){
                if(freq[a[i][j]]==1){
                    find = true;
                    break;
                }
            }
               if(!find){
                cout<<"Yes"<<endl;
                return;
               }
          
        }
    cout<<"No"<<endl;

     
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}