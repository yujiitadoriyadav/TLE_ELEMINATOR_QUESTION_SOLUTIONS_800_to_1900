#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long  n,k;
        cin>>n>>k;
        vector<long long>a(n);
        for( long long i=0;i<n;i++){
            cin>>a[i];
        }
     sort(a.begin(),a.end());
    long long  start=0,end=1;
    bool flag = false;
 
   if(n==1) flag =(a[0]==k);

    while(start<n && end<n){
        if(abs(a[end]-a[start])==k){
            flag =true;
            break;
        }
       else if(abs(a[end]-a[start])>k){
            start++;
        }
        else
        end++;
    }
    if(flag)
    cout<<"YES"<<endl;
 
    else cout<<"NO"<<endl;
     
    }
} 