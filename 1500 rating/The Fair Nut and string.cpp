// #include <bits/stdc++.h>
// using namespace std;

// #define int long long 
// #define pb push_back
// #define all(x) x.begin(), x.end()
// #define endl '\n' 
// #define F first
// #define S second
// #define sz(x) (int)x.size()

// void solve() {
//   string s; cin>>s;
//   int ans =0,x=0;
//   for(int i=0;i<s.size();i++){
//     if(s[i]=='a') ans = (ans+x+1)%100000007;
//     if(s[i]=='b') x= ans;
//   }
//   cout<<ans<<endl;
  
// }

// int32_t main() {  
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
    
//     int t = 1;
//   //cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
string a;
int ans,x;
int main(){
	cin>>a;
	for(int i=0;i<a.size();i++){
		if(a[i]=='a')ans=(ans+x+1)%1000000007;
		if(a[i]=='b')x=ans;
	}
       cout<<ans;
	return 0;
}
