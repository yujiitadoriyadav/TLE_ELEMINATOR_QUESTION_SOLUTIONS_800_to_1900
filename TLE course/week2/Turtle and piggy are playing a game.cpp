#include<bits/stdc++.h>
using namespace std;
int main(){
    
        int t; cin>>t;
        while(t--){
            long long l,r;
             cin>>l>>r;
            int c=0;
            long long x =1;
            while(x<=r ){
                x*=2;
                c++;
            } 
            cout<<c-1<<endl;
        }
    
}