#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        char ch; cin>>ch;
        string s ; cin>>s;
       int x=0,c=0;
       for(int i=0;i<n;i++){
        if(s[i]==ch){
            x=i+1;
            c++;
        }
       }
       if(c==n) {
        cout<<0<<endl; 
        continue;
    }
    if(x>n/2){
        cout<<"1\n"<<x<<endl;
    }
    else{
        cout<<"2\n"<<n<<" "<<n-1<<endl;
    }


    }
}