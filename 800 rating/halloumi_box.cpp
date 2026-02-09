#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        bool flag = true;
        for(int i=0;i<n-1;i++){
            if(k==1 && a[i]>a[i+1]){
                flag = false;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else  cout<<"NO"<<endl;
      
    }
}