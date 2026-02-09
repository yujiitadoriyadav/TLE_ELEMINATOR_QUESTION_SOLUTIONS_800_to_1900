#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
    int n,k;
    cin>>n>>k;
    vector<long long>a(n);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
       
    }
    // priority_queue<long  long>pq1;
    // priority_queue<long long ,vector<long long>  ,greater<long long>>pq2;

    // for(int i=0;i<n;i++){
    //     pq1.push(a[i]);
    //     pq2.push(a[i]);
    // }
    // for(int i=0;i<k;i++){
    //     long long min1 =pq2.top();
    //     pq2.pop();
    //     long long min2 = pq2.top();
    //     pq2.pop();
    //     long  long maxi = pq1.top();
    //     pq1.pop();
    //     if(min1+min2 > maxi){
    //         sum-=maxi;
    //         pq2.push(min1);
    //         pq2.push(min2);

    //     }
    //     else{
    //         sum-=(min1+min2);
    //         pq1.push(maxi);
    //     }
       
    // }
    //   cout<<sum<<endl;

    sort(a.begin(),a.end());
    vector<long long >pr(n+1,0);
   
    for(int i=0;i<n;i++){
        pr[i+1]=pr[i]+a[i];
    }
   long long ans = 0;
   for(int i=0;i<=k;i++){
      ans = max(ans,pr[n-i]-pr[2*(k-i)]);
   }
   cout<<ans<<endl;
    }
}