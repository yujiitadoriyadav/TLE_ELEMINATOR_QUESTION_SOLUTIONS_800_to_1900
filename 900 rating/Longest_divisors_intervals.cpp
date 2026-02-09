#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     long long n;
     cin>>n;
    //  vector<long long>div;
    //  for(long long i =1;i*i<=n;i++){
    //     if(n%i==0){
    //         div.push_back(i);
    //         if(i!=n/i){
    //              div.push_back(n / i);
    //         }
    //     }
    //  }
    //  sort(div.begin(),div.end());
    //  long long s = div.size();
    //  long long maxi =1;
    //  long long curr =1;
    //  for(long long i=1;i<s;i++){
       
    //           if(div[i]==(div[i-1]+1)){
    //             curr++;
               
    //           }

    //         else{
    //             maxi = max(maxi,curr);
    //             curr=1;
    //         }
              
    //  }
    //  maxi = max(maxi,curr);
    //  cout<<maxi<<endl;
             long long ans =1;
             while(n%ans==0){
                ans++;
             }
             cout<<ans-1<<endl;

    }
}