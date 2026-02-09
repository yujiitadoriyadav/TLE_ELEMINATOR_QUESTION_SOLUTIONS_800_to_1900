#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        vector<int>res;
        for(int i=0;i<n;i++){
            int l=1,h=i+1;
            
            while(l<=h){
                int m=l +(h-l)/2;
                if(a[i-m+1]>=m){
                    l=m+1;
                }else{
                    h =m-1;
                }
              
            }
            res.push_back(h);

        }
        for(int i=0;i<res.size();i++){
           cout<<res[i]<<" ";
        }
        cout<<endl;
        
    }
}