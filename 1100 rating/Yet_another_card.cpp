#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<int>a(n),t(q);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<q;i++){
        cin>>t[i];
    }
    int  i=0;
    while(q--){
        int p =find(a.begin(),a.end(),t[i])-a.begin();
        cout<<p+1<<" ";
        rotate(a.begin(),a.begin()+p,a.begin()+p+1);
        i++;
    }
}