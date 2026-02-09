#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
 while(t--){
    long long  n,x;
    cin>>n>>x;
    long long  a[n];
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    long long sum1=0 , sum=0;
    for(long long i=0;i<n;i++){
        sum+=ceil((double)a[i]/x);
        sum1+=a[i];

    }
    sum1=ceil((double)sum1/x);
    cout<<sum1<<" "<<sum<<endl;
 }
}