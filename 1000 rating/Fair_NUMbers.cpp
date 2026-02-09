#include<bits/stdc++.h>
using namespace std;
 bool check(long long n){
    long long original =n;
    while(n>0){
        int i = n%10;
        if( i!=0 &&  original%i!=0 ) return false;
        n=n/10;
    }
    return true;
 }
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;       
       for(long long i=n;i<=2*n;i++){
        if(check(i)){
          cout<<i<<endl;
           break;
          }
    }
}
}