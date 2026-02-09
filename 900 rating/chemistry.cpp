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

        int l=s.size();
        if(l==1 || l==0 ){
            cout<<"YES"<<endl;
            continue;
        }
       vector<int>m(26,0);
        for(int i=0;i<l;i++){
            m[s[i]-'a']++;
        }
        int even =0,odd=0;
        for(int i=0;i<m.size();i++){
            if(m[i]%2==0) even++;
            else odd++;
        }
        if((odd-1)<=k){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
        
    }
}