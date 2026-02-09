#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
const int mod =1e7;

int parity(vector<int>& a, int l, int r){
    if(l>=r) return 0;
    int inv=0;
    int m = (l + r) / 2;
    inv+=parity(a,l,m);
    inv+=parity(a,m+1,r);

    vector<int>tmp;
    int i=l,j=m+1;
    while(i<=m && j<=r){
        if(a[i]<=a[j]) tmp.pb(a[i++]);
        else{
            tmp.pb(a[j++]);
            inv+=((m-i+1));
        }
    }
    while(i<=m) tmp.pb(a[i++]);
    while(j<=r) tmp.pb(a[j++]);

    for(int k=0;k<tmp.size();k++){
        a[l+k]=tmp[k];
    }

    return inv;
}
void solve() {
  int n; cin>>n;
  vector<int>a(n),b(n);
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<n;i++) cin>>b[i];
 bool odd=0,even=0;
 if(a==b){
    cout<<"YES"<<endl;
    return;
 }
 vector<int>sa=a,sb=b;
 sort(all(sb)) , sort(all(sa));
 if(sa!=sb) {
    cout<<"NO"<<endl;
    return;
 }
 
 int pa =parity(a, 0, n - 1);
 int pb =parity(b, 0, n - 1);
    
 if(pa%2==pb%2) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
 
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


