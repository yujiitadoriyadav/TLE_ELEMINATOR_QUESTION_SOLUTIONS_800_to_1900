#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
   while(t--){
    int n;
    cin>>n;
    long long a[n];
    for(int i=0 ;i<n;i++){
        cin>>a[i];
    }
   
   long long count =0;
   bool flag = true;
   for(int i =n-2;i>=0;i--){
         while(a[i]>=a[i+1] && a[i]>0){
            a[i]=a[i]/2;       
            count++;
         }
         if(a[i]==a[i+1]){
           flag = false;
           
         }

   }
   if(flag)
   cout<<count<<endl;
   else
   cout<<-1<<endl;
}
}