#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    int mini=abs(a[0]);
    for(int i=1;i<n;i++){
        mini=min(mini,abs(a[i]));
    }
    cout<<mini<<endl;
}