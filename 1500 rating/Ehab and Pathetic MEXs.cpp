
#include<bits/stdc++.h>
using namespace std;
    int b[100000];
    int main()
    {
    int n,i,v=0,s;
    cin>>n;
    s=n-2;
    int a[n-1][2];
    for(i=0;i<n-1;i++)
    {
    	cin>>a[i][0]>>a[i][1];
    	b[a[i][0]]++;
    	b[a[i][1]]++;
    }
    for(i=0;i<n-1;i++)
    {
    	if(b[a[i][0]]==1||b[a[i][1]]==1)
    	cout<<v++<<endl;
    	else
    	cout<<s--<<endl;
    }
}
// #include <bits/stdc++.h>
// using namespace std;

// #define int long long 
// #define pb push_back
// #define all(x) x.begin(), x.end()
// #define endl '\n' 
// #define F first
// #define S second
// #define sz(x) (int)x.size()
// #define DEV_OP
// const int mod =1e9+7;

// void solve() {
//   int n; cin>>n;
//   int a[n-1][2];

//   vector<int>deg(n+1,0);
//   for(int i=0;i<n-1;i++){
//     cin>>a[i][0]>>a[i][1];
//      deg[a[i][0]]++;
//      deg[a[i][1]]++;
//   }
//   int l =0,r=n-2;
//   for(int i=0;i<n-1;i++){
//        if(deg[a[i][0]]==1 || deg[a[i][1]==1]) {
          
//          cout<<r<<endl;
//           r--;
       
//        }
//        else{
//          cout<<l<<endl; l++;  
//        } 
//   }
   
// }
  

 


// int32_t main() {  
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t=1;
//    //cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }