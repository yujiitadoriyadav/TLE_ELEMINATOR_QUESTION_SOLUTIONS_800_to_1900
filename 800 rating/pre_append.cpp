#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int start=0;
        int end =s.size()-1;
        if(end==0){
            cout<<1<<endl;
            continue;
        }
        while(start<=end){
            if(s[start]!=s[end]){
                start++;
                end--;
            }
            else{
            cout<<end-start+1<<endl;
            break;
            }
            
            if(start>end){
                cout<<0<<endl;
            }
        }
    }
}