#include<bits/stdc++.h>
using namespace std;

long long  power(long long a){
    while(a%2==0){
        a/=2;
    }
    return a;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long  a,b;
        cin>>a>>b;
        if(a>b) swap(a,b);

        long  long r =power(a);
        if(power(b)!=r){
            cout<<-1<<endl;
            continue;
        }

        int ans =0;
        b/=a;

        while(b>8){
            b/=8;
            ans++;
        }

        if(b>1) ans++;

        cout<<ans<<endl;
        

    

    }
}