#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(v[0]==v[n-1]){
            cout<<-1<<endl;
        }
        else{
            int it=0;
            while(v[it]==v[0]) it++;
            cout<<it<<" "<<n-it<<endl;
            for(int i=0;i<it;i++) cout<<v[i]<<" ";
            cout<<endl;
            for(int i=it;i<n;i++) cout<<v[i]<<" ";
            cout<<endl;

        }
    }
}