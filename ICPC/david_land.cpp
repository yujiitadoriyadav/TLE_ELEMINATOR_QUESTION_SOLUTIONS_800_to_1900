#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n =s.size();
    int ta=0,tb=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            ta++;
        }
        else
         tb++;
    }
    if((ta+tb)%2!=0){
        cout<<"NO"<<endl;
        return 0;
    }
    int ca=0,cb=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A') ca++;
        else cb++;

        if(ca==cb){
            cout<<"YES"<<endl;
            cout<<1<<" "<<i+1<<endl;
            return 0;
        }
    }
}