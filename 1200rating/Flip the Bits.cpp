#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string a,b; cin>>a>>b;
        a.push_back('0'); b.push_back('0');
        int c=0;
        bool flag =true;
        for(int i=0;i<n;i++){
            c+=(a[i]=='1')-(a[i]=='0');
            if((a[i]==b[i]) != (a[i+1]==b[i+1]) && c!=0){
             flag =false;
                break;
            }
        }
        if(!flag) cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}