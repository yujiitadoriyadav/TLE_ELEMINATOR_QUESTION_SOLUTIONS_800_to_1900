#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c[n];
        for(int i=0;i<n;i++){
            cin>>c[i];
        }
        sort(c,c+n);
      if(c[0]!=1){
        cout<<"NO"<<endl;
        continue;
      }
      bool flag = true;
      long long sum =c[0];
      for(int i=1;i<n;i++){
        if(sum<c[i]){
           flag = false;

        }
        sum+=c[i];
      }
      if(flag ) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;

    }
}