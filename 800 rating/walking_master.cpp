#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long  a,b,c,d;
        cin>>a>>b>>c>>d;
        // if(a==c && b==d){
        //     cout<<0<<endl;
        //     continue;
        // }
        // long long ans=0;
        //  if(b<d){
        //     ans = d-b;
        //     a=a+ans;
        //     b=b+ans;

        //  }
        //  if(b==d && a>=c){
        //     cout<<ans + a-c<<endl;
        //  }
        //  else
        //  cout<<-1<<endl;
      if(b<=d &&a+d-b>=c){
        cout<<d-b + (a+d-b)-c<<endl;
      }
      else
      cout<<-1<<endl;

    }
}