#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        int even=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]==2)
            even++;
        }
        if(even%2!=0){
        cout<<-1<<endl;
      }
      
      else{
        even=even/2;
        int c=0;
        for(int i=1;i<=n;i++){
            if(a[i]==2){
                c++;
            }
            if(c==even)
            {
                cout<<i<<endl;
                break;
            }
        }
      }
    }
}