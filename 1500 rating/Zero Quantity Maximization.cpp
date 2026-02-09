#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n;
  cin>>n;
  vector<int>a(n),b(n);
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<n;i++) cin>>b[i];
  map<long double,int>m;
  int count=0;
  for(int i=0;i<n;i++){
    if(a[i]!=0) m[-(long double)b[i]/a[i]]++;
    if(a[i]==0 && b[i]==0) count++;
  }
  int maxi=0;
  for(auto i:m) maxi=max(maxi,i.second);
  cout<<maxi+count<<"\n";
}