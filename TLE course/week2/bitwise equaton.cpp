#include<bits/stdc++.h>
#define ll  long long 
using namespace std;
int main(){
    int  t;
    cin>>t;
    while(t--){
        int n ;
        // explaination in notebook 
        cin>>n;
        ll a =(1LL<<36)  + (1LL<<37);
        ll b =(1LL<<36);
        ll c = (1LL<<35);
        ll d =(1LL<<36) + (1LL<<35)+n;
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        
    }
}