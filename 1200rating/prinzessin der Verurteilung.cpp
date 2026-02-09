#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    string s ;cin>>s;
    
    for(char i ='a';i<='z';i++){
        string s1(1,i);
        if(s.find(s1) == string::npos){
            cout<<s1<<endl;
            return;
        }
    }
    for (char i = 'a'; i <= 'z'; i++) {
        for (char j = 'a'; j <= 'z'; j++) {
            string s2 = string(1, i) + j;
            if (s.find(s2) == string::npos) { // Check if s2 is missing
                cout << s2 << endl;
                return;
            }
        }
    }
    for (char i = 'a'; i <= 'z'; i++) {
        for (char j = 'a'; j <= 'z'; j++) {
            for (char k = 'a'; k <= 'z'; k++) {
                string s3 = string(1, i) + j + k;
                if (s.find(s3) == string::npos) { // Check if s3 is missing
                    cout << s3 << endl;
                    return;
                }
            }
        }
    }
    
}
int main(){
     int t; cin>>t;
     while(t--){
       solve();
     }
}