#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         int n;
         cin>>n;
         int a[n];
         for(int i=0;i<n;i++){
            cin>>a[i];
         }
         bool flag =false;
         int index;
         for(int i=1;i<n-1;i++){
            if(a[i-1]<a[i]  && a[i]>a[i+1]){
                flag = true;
                index =i;
            }
         }
         if(flag) { 
            cout<<"YES"<<endl;
         cout<<index<<" "<<index+1<<" "<<index+2<<endl;
         }
         else cout<<"NO"<<endl;

    }
    }