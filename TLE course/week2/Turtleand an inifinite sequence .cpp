#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n, m;
    cin >> n >> m;
    int ans = max(0,n-m);
    while(ans < n+m){
        ans |= (ans+1);
    }
    cout << ans << endl;
}

int main(){
    int t; cin>>t;
    while(t--){
         solve();
    // long long n,m; cin>>n>>m;
    //  long long ans=0;
    //  for(int i=0;i<=30;i++){
    //     long long x = n&((1LL<<(i+1))-1);
    //     long long t =(1LL<<i)-x;
    //     if(n>=(1LL<<i)){
    //         t=min(t,x+1);
    //     }
    //     if(x>=(1LL<<i) || t<=m){
    //         ans|=(1LL<<i);
    //     }

    //  }
    //  cout<<ans<<endl;
}
}
