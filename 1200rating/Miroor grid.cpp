 #include<bits/stdc++.h>
 #define ll long long
 using namespace std;
 int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<vector<char>>a(n,vector<char>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        ll ans=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n-1-i;j++){
                int c = (a[i][j] - '0') + (a[j][n - 1 - i] - '0') +
                    (a[n - 1 - i][n - 1 - j] - '0') + (a[n - 1 - j][i] - '0');
                ans+=min(c,4-c);
            }
        }
     
  
        
        cout<<ans<<endl;
    }
 }

//  for(int i=0;i<n;i++){
//     for(int j =0;j<n;j++){
//       if(a[i][j]=='1'){
//         if(a[j][n-i-1]!='1'){
//             c1++;
//             a[j][n-i-1]='1';
//         }
//         if(a[n-1-i][j]!='1'){
//             c1++;
//             a[n-1-i][j]='1';
//         }
//         if(a[n-1-j][i]!='1'){
//             c1++;
//             a[n-1-j][i]='1';
//         }
//       }
//     }
   
// }
