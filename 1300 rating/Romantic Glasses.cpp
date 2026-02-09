#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
       map<ll,ll>m;
        m[0]=1;
        bool flag =false;
        ll  s=0;
        for(int i=0;i<n;i++){
            a[i]*=((i%2)?-1:1);
            s+=a[i];
            if(m[s]){
              flag = true;
                break;
            }
            ++m[s];
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}