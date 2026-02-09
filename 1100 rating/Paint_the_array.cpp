#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        bool flag = true;
        for(int i=0;i<n;i++){
            cin>>a[i];
            // if(i>0 && a[i]==a[i-1]){
            //     flag = false;
            // }
        }
        long long gcd1 = a[0],gcd2=a[1];
        for(int i=2;i<n;i=i+2){
            gcd1= __gcd(gcd1,a[i]);
        }
          for(int i=3;i<n;i=i+2){
            gcd2= __gcd(gcd2,a[i]);
        }
         bool valgcd1 = true, valgcd2=true;
         for(int i=1;i<n;i+=2){
            if(a[i]%gcd1==0){
                valgcd1=false;
                break;
            }
         }
          for(int i=0;i<n;i+=2){
            if(a[i]%gcd2==0){
                valgcd2=false;
                break;
            }
         }
         if(valgcd1) cout<<gcd1<<endl;
         else if(valgcd2) cout<<gcd2<<endl;

         else
         cout<<0<<endl;

    }
}