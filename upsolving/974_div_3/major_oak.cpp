#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long sum=0;
        // tle;;
        // for(int i=1;i<=k;i++,n--){
        //       long long x=n;
        //     long long pow=1;
        //     while(x--){
        //         pow*=n;
        //     }
        //     sum+=pow;
        // }
        
        // if(sum%2==0){
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
         // }
    /// powers ka sum even aana cahiye uske liye sab even no
    //ho ya fir odd no(even times ho);

     // last ele = n first ==n-K+1;
     sum = k*(n + n-k+1)/2;
       if(sum%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
         }
    }
}