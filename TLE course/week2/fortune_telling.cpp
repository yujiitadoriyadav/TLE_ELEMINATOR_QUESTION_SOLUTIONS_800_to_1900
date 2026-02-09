#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;
        vector<ll>v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        // ll f =1;
        // // f is odd;
        // for(ll i=0;i<n;i++){
        //     if(v[i]&1){
        //         f=(!f);
        //     }
        // }


        // //if f is 1 is  
        // // if we start with odd number we end at the number same  as parity as f

        // if(x&1){
        //    if(!((f^y)&1LL)){      // if same parity 
        //     cout<<"Alice"<<endl;
        //    }
        //    else{
        //     cout<<"Bob"<<endl;
        //    }
        // }
        // else{
            
        //      if(!((f^y)&1LL)){      // if same parity 
        //     cout<<"Bob"<<endl;
        //    }
        //    else{
        //     cout<<"Alice"<<endl;
        //    }
        // }
        ll sum = accumulate(v.begin(),v.end(),0LL);
        if((sum+x+y)%2==0){
            cout<<"Alice"<<endl;

        }
        else{
            cout<<"Bob"<<endl;
        }
      
    }
}