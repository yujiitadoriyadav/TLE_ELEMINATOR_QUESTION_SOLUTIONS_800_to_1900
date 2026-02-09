#include<bits/stdc++.h>
using namespace std;
int main(){
    // mene teepa hai ;;;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        long long  n = s.size();
     bool flag = true;
     long long start =0;
     long long end = 0;
     long long  maxi =0;
     long long c=0;
     for( long long i=0;i<n;i++){
        if(s[i]=='1'){
            c++;
        }
        else{
            if(flag){
                flag = false;
                start=c;   // suru mein kitne lagatar 1 hai 
            }
           maxi = max(maxi,c);
           c=0;
        }
     }
     maxi = max(maxi,c);
     end =c;  // end mein lagatar kitne the --
     maxi = max(maxi , start+end);   // suru mein 1 + akhir mein 1 
     if(flag){
        long long ans =n*n;
        cout<<ans<<endl;
     }
     else{
         long long x = (maxi-1)/2;
        long long  ans = (maxi -x)*(x+1);
        cout<<ans<<endl;
        
        }
    }
    }
