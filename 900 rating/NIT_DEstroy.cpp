#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long  a[n+1];
        int c =0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]==0) c++;
        }
    if(c==n) {
       cout<<0<<endl;
       continue;
     }
    int group =0;
    bool ingroup = false;
    for(int i=1;i<=n;i++){
        if(a[i]!=0  && !ingroup){
            group++;
            ingroup = true;
        }
        else if(a[i]==0){
            ingroup = false;
        }
    }
    cout<<min(group,2)<<endl;
     
        }
        }