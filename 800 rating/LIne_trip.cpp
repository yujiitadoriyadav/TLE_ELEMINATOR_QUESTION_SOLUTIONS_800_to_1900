#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int maxi=0;
        int j=0;
        for(int i=0;i<n;i++){
             int ans = a[i]-j;
            maxi=max(maxi,ans);
            j=a[i];
        }
        int last = 2*(x-a[n-1]);
        maxi=max(maxi,last);
        cout<<maxi<<endl;
    }
}