#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>b=a;
        reverse(b.begin(),b.end());
           int ans =0 , x =1;
        while(x<n){
            if(b[x]==b[0]){
                x++;
                continue;
            }
            ans++;
            x*=2;
        } 
        cout<<ans<<endl;     
    }
}