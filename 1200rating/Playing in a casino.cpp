
#include <bits/stdc++.h>
using namespace std;
long long t,n,m,i,j,s;
int main()
{
cin>>t;
while(t--)
{
s=0;
cin>>n>>m;
int a[m+1][n+1];
for(i=0;i<n;i++)
for(j=0;j<m;j++) cin>>a[j][i];
for(i=0;i<m;i++)
{
sort(a[i],a[i]+n,greater<int>());
for(j=0;j<n;j++)
s+=a[i][j]*(n-2*j-1);
}
cout<<s<<endl;
}
}