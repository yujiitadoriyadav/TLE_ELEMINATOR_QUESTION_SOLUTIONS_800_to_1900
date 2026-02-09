#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
      int xo=0;
            
            for(int i=0;i<n;i++){
                xo=xo^a[i];
                
            }
            if(xo==0){
                cout<<0<<endl;
            }
          else{
            if(n%2==0) cout<<-1<<endl;
            else cout<<xo<<endl;
          }
    }
}