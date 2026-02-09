#include<bits/stdc++.h>
using namespace std;
// nahi soch paya ise 
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s1,s2; cin>>s1>>s2;
        bool flag = true;
        for(int i=0;i<n-1;i++){
            if(i%2!=0 && s1[i]=='<' && s2[i+1]=='<'){
                flag = false;
                break;
            }
            if(i%2==0 && s2[i]=='<' && s1[i+1]=='<'){
               flag = false;
               break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
