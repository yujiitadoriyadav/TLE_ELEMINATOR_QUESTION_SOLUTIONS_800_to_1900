#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        // long long a1,a2;
        // long long a=-1,b=-1;
        // for(int i=1;i<x;i++){
        //      a1=i;
        //    a2=2*x-i;
        //    if((a1^a2)==x){
        //     a=a1;
        //     b=a2;
        //     break;
        //    }
        // }
        // if(a==-1 ){
        //     cout<<-1<<endl;
        // }
        // else 
        // cout<<a<<" "<<b<<endl;
        int a=x, b=0;
       for(int i=32;i>=0;i--){
        if(x&(1LL<<i)>0){
            continue;
        }
        if(2*x-a-b>=(2LL<<i)){
            a+=1LL<<i;
            b+=1LL<<i;
        }
       }
       if((a+b)==2*x  && ((a^b)==x)){
        cout<<a<<" "<<b<<endl;
       }
       else{
        cout<<-1<<endl;
       }
        
    }
}