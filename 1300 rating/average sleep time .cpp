#include<bits/stdc++.h>
#define ld long double
using namespace std;
int main(){
    int n,k; cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    ld sum =0,ans=0;
    for(int i=0;i<k;i++){
        sum+=a[i];
    }
    ld d =n-k+1;
   ans +=sum/d;
    for(int i=k;i<n;i++){
        sum-=a[i-k];
        sum+=a[i];
        ans+=sum/d;
    }

    cout<<fixed << setprecision(10) <<ans<<endl;
}
