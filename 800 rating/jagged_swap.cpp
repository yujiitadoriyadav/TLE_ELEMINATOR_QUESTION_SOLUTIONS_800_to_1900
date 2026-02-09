#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
      for(int j=0;j<n;j++){
        for(int i=1;i<n-1;i++){
            if(a[i]>a[i-1] && a[i]>a[i+1]){
                swap(a[i],a[i+1]);
            }
        }
      }
        bool flag = true;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                flag = false;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
}