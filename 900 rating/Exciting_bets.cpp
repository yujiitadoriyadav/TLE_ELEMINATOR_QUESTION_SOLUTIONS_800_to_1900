#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(a==b) cout<<0<<" "<<0<<endl;
        else{
        long long g = abs(a-b);
        long long m = min(a%g , g-a%g);
  // exc se mod lenge aur pata karege diff 
  // min dhundo --min steps on increse decrese
         cout<<g<<" "<<m<<endl;
        }
    }
}