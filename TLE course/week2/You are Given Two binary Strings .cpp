#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string x ,y; cin>>x>>y;
        reverse(x.begin(),x.end());
        reverse(y.begin(),y.end());

       int  posy = y.find('1');
       int posx=-1;
        for(int i=0;i<x.size();i++){
            if(x[i]=='1' && posy<=i){
                posx =i;
                break;
            }
        }
        cout<<posx-posy<<endl;


    }
}