#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
       vector<vector<int>> v(n, vector<int>(n));

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
            }
        }
        long long count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]!=v[n-i-1][n-j-1]){
                    count++;
                    
                }
            }
        }
        count =count/2;
        if(count>k) cout<<"NO"<<endl;
        else{
         k = k-count;
            if(k%2==0 || n%2!=0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
       
    }
}