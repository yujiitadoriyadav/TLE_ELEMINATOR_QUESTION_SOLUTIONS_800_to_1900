#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()


vector<int> factorials;
vector<int> powers;
void pre() {
    
    int f = 1;
    for (int i = 1; f <= 1e12; i++) {
        factorials.push_back(f);
        f *= i + 1;
    }

    // Compute powers of 2 <= 1e12
    int p = 1;
    while (p <= 1e12) {
        powers.push_back(p);
        p *= 2;
    }
}
void solve() {
  int n; cin>>n;
 int mini =LLONG_MAX;
 int sz = factorials.size();
  
 for(int m=0;m<(1<<sz);m++){
    int sum =0,count =0;
    for(int i=0;i<sz;i++){
        if(m&(1<<i)){
         sum+=factorials[i];
         count++;
        }
       
    }
  if(sum>n) continue;
  int rem =n-sum;
  count+=__builtin_popcountll(rem);
  mini = min(mini,count);

 }

 if(mini ==LLONG_MAX) cout<<-1<<endl;
 else cout<<mini<<endl;

}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    pre();
    int t = 1;
    
   cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

