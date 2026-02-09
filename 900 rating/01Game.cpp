#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int c0=0,c1=0;
        for(int i=0;i<s.size();i++){
             if(s[i]=='1'){
                c1++;
             }
             else
             c0++;
        }
        int mini = min(c0,c1);
        if(mini%2==1) cout<<"DA"<<endl;
        else  cout<<"NET"<<endl;


    }
}