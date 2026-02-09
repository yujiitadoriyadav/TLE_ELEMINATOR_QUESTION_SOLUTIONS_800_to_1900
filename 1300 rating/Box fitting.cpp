#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()

void solve() {
    // Code for each test case goes here
  int n,w;  cin>>n>>w;
    vector<int>a(20,0);
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
      a[__builtin_ctz(x)]++;
    }
    int j=n;
    int h=0;
    while(j>0){
       int width = w;
       for(int i=19;i>=0;i--){
        while(a[i]>0 &&(1LL<<i)<=width){
            width-=(1LL<<i);
            a[i]--;
            j--;
        }
       }
       h++;
    }
    cout<<h<<endl;

}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}