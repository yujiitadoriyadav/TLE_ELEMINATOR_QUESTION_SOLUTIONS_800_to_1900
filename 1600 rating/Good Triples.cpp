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
 int n; cin>>n;
 int c =1;
 
while(n>0){
    int d=n%10;
    n/=10;

    int mul =0;
    for(int i=0;i<=d;i++){
        for(int j=0;j<=d;j++){
            if(d-i-j>=0){    // i+j+k==d so k>=0
                mul++;
            }
        }
    }
    c*=mul;   


// We must simultaneously satisfy:
// Units digit splits into a triple with sum = 2
// Tens digit splits into a triple with sum = 7
// Hundreds digit splits into a triple with sum = 4

}
  cout<<c<<endl;
}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t = 1;
   cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

