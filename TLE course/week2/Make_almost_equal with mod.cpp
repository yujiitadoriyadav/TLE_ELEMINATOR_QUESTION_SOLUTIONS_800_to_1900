#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=1;i<=61;i++){
            long long num = (1LL<<i);
             set<long long>st;
             for(int j=0;j<n;j++){
                st.insert(a[j]%num);
             }
             if(st.size()==2){
                cout<<num<<endl;
                break;
             }
        }
    }
}