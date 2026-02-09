#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
const int mod=1e9+7;


void solve() {
 int n; cin>>n;
 vector<int>a(n);
 int sum=0;
 for(int i=0;i<n;i++) {
    cin>>a[i];
    sum+=a[i];
 }

 if(sum%2){
    cout<<0<<endl;
    return;
 }
 vector<int>dp(sum/2+1,0);
 //knapsack check sum is divide by 2 
 dp[0]=1;
 sum=sum/2;
 for(int i=0;i<n;i++){
    for(int j=sum;j>=a[i];j--){
        dp[j]|=dp[j-a[i]];
    }
 }
 if(!dp[sum]) {
    cout<<0<<endl; return;
 }
 // agar divide ho jaye to ek number delete kardo 
 // pehla odd // ya sabse pehle odd banjaye 
int ans =INT_MAX,res;
 for(int i=0;i<n;i++){
    int sum =0;
    while(!(a[i]&1)){
        a[i]/=2;
        sum++;
    }
    if(sum<ans) ans =sum,res=i;
 }
 cout<<1<<endl<<res+1;
 
}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

