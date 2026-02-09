#include<bits/stdc++.h>
#define int long long 
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        k--;
        // n = even no problemm - no extra step 
        int f = n/2; //after n/2 steps b take extra step;
        int extra = (n%2)*k/f;
        cout<<((k+extra)%n+1)<<endl;
       
       
       
        
    }
}