#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int c=0;
    while(x){
      c+=(x)%2;
      x=x/2;
    }
    cout<<c<<endl;
}