#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;

        string s;
        cin>>s;
        
        int maxi =1;
        int cur=1;
        for(int i=0;i<n;i++){
            if(s[i]!=s[i-1]) cur=1;
            else cur++;
            maxi = max(maxi,cur);
        }
         
        cout<<maxi+1<<endl;

    }
}