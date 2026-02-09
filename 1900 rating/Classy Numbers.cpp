#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
int dp[20][2][4];
int f(string &s ,int idx ,int tight,int cnt){
    if(idx==s.size()) return 1;
    if(dp[idx][tight][cnt]!=-1) return dp[idx][tight][cnt];

    int limit =(tight==1?s[idx]-'0':9);
    int ans=0;
    for(int i=0;i<=limit;i++){
        int updatecnt=cnt+(i!=0?1:0);
        if(updatecnt<=3){
            ans+=f(s,idx+1,(tight&(i==s[idx]-'0')),updatecnt);

        }

    }
    return dp[idx][tight][cnt]=ans;
}
void solve() {
  int l,r; cin>>l>>r;
  string ri=to_string(r);
  string le=to_string(l-1);
  memset(dp,-1,sizeof(dp));
  int right=f(ri,0,1,0);
  memset(dp,-1,sizeof(dp));
  int left =f(le,0,1,0);
  cout<<right-left<<endl;

        
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

