#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int w[n];
        for(int i=0;i<n;i++){
            cin>>w[i];
        }
        vector<int>dp1(n,0);
        vector<int>dp2(n,0);  
        int leftsum=0,rightsum=0;
     
    for(int i=0;i<n;i++){
        leftsum+=w[i];
        dp1[i]=leftsum;
    }
    for(int i=n-1;i>=0;i--){
        rightsum+=w[i];
        dp2[i]=rightsum;
    }
    int i=0,j=n-1;
    int diff=0;
       while(i<j){
           if(dp1[i]==dp2[j]){
              diff=j-i;
              i++;
              j--;
           }
           else if(dp1[i]>dp2[j]){
                j--;
           }
           else
           i++;
       }
   if(diff){
    cout<<n-diff+1<<endl;
   }
   else
   cout<<0<<endl;
    }
}