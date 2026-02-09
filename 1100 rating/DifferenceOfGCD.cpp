#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long  n , l,r;
        cin>>n>>l>>r;
        int a[n+1];
        bool flag =true;
        for(int i=1;i<=n;i++){
            a[i]=((l-1)/i+1)*i;
             if(a[i]>r) flag =false;
        }
        if(flag){
            cout<<"YES"<<endl;
            for(int i=1;i<=n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}
