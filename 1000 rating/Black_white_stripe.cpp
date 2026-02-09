#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int mini =INT_MAX;
        // mera method 
        // for(int i=0;i<=n-k;i++){
        //     int count =0;
        //     for(int j=i;j<i+k;j++){
        //        if(s[j]=='B'){
        //         count++;
        //        }
        //     }
        //     mini =min(mini,k-count);
        // }
        // chatugptipu method -
       
        int white_count = 0;
        for (int i = 0; i < k; i++) {
            if (s[i] == 'W') {
                white_count++;
            }
        }

        
        int min_white_count = white_count;
        for (int i = k; i < n; i++) {    
            if (s[i - k] == 'W') {
                white_count--;
            }
          
            if (s[i] == 'W') {
                white_count++;
            }
          
            min_white_count = min(min_white_count, white_count);
        }

        
        cout << min_white_count << endl;
    }
    }
