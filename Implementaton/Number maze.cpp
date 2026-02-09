#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
const int mod=1e12;

string get(string a,string b){
    int A=0,B=0;
    int n =a.size();
    vector<int>fa(10,0),fb(10,0);

    for(int i=0;i<n;i++){
        if(a[i]==b[i]) A++;
        else{
            fa[a[i]-'0']++;
            fb[b[i]-'0']++;
        }
    }
    for(int i=0;i<10;i++){
      B+=min(fa[i],fb[i]);
    }

    return to_string(A)+"A"+to_string(B)+"B";
}


void solve(){
  int n,j,k; cin>>n>>j>>k;

  string s=to_string(n);
  sort(all(s));
  vector<string>p;
  do{
    p.push_back(s);
  }while(next_permutation(s.begin(),s.end()));

  string a =p[j-1];
  string b =p[k-1];

  cout<<get(a,b)<<endl;

  
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

