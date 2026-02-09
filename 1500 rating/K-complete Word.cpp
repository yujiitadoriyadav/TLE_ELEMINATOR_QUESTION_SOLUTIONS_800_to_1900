#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    
    int ans =n;
    for(int i=0;i<=k-1-i;i++){
        vector<int>cnt(26,0);
        for(int j=i;j<n;j+=k){
            cnt[s[j]-'a']++;
        }
        if(i<k-1-i){
            for(int j =k-1-i;j<n;j+=k){
                cnt[s[j]-'a']++;
            }
        }
        ans-=*max_element(cnt.begin(),cnt.end());
    }
    cout<<ans<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
