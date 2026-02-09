#include<bits/stdc++.h>
using namespace std;
bool notpower(long long n){
    while(n%2==0){
        n/=2;
    }
    return n>1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
      if(notpower(n)){
        cout<<"YES"<<endl;
      }
      else
      cout<<"NO"<<endl;
    }
}