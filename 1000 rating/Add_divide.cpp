#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,count,ans=INT_MAX;
        cin>>a>>b;
        for(long long i=0;i*i<=a;i++){
            if(b==1 && i==0){
                continue;
            }
            count =i;
            long long c =a;
            while(c){
                c/=(b+i);
                count++;
            }
            ans = min(ans,count);

        }
        cout<<ans<<endl;
     
    }
}