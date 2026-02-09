#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n ,k;
    cin>>n>>k;
    int a[n];
   
    for(int i=0;i<n;i++){
        cin>>a[i];
     
    }
     int mini =k-1;
    int even=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0) even++;
        if(a[i]%k==0) mini =0;
        else 
           mini =min(mini, k-a[i]%k);
    }
    if(k!=4){
        cout<<mini<<endl;
    }
    else{
        if(even>=2) 
        cout<<0<<endl;
        else if(even ==1)
         cout<<min(mini,1)<<endl;
         else 
         cout<<min(2,mini)<<endl;
    }

    

}
}