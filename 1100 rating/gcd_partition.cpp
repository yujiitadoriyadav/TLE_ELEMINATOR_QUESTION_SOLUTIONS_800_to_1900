#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }

        long long maxi=-1;
        long long pref=0;
        for(int i=0;i<n-1;i++){
            pref+=a[i];
           
            maxi=max(maxi,__gcd(pref,sum-pref));
        }

        cout<<maxi<<endl;
    }
}