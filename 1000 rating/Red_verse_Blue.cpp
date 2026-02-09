#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r,b;
        cin>>n>>r>>b;
    //  vector<char>ans(n,'R');
    
    //    int divi =r/(b+1);
    
    //    if(r%(b+1)){
    //     divi++;
    //    } 
    //    for(int i=divi;i<n;i+=divi+1){
    //     ans[i]='B';
        
    //    }
    //  for(int i=0;i<n;i++){
    //     cout<<ans[i];
    //  }
    //  cout<<endl;
    string ans ="";
    int divi =r/(b+1);
    int extra = r%(b+1);

    for(int i=0;i<b;i++){
        ans+=string(divi,'R');
        if(extra>0){
            ans+='R';
            extra--;
        }
        ans+='B';
    }    
    ans+=string(divi,'R');
    cout<<ans<<endl;


 }
}