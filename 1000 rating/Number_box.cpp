#include<bits/stdc++.h>
using namespace std;
int row[4]={-1,1,0,0};
int col[4]={0,0,-1,1};
int main(){
   int t;
   cin>>t;
   while(t--){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int c=0;
    int mini =INT_MAX;
    long long sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]<0) 
               c++;
           mini = min(mini,abs(a[i][j]));
           sum+=abs(a[i][j]);
           
        }
    }
    if(c%2==0){
        cout<<sum<<endl;
    }
    else{
        cout<<sum-2*mini<<endl;
    }
    
        
    
   }
}