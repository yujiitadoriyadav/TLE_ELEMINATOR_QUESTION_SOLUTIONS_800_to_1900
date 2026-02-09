#include<bits/stdc++.h> 
#define ll long long
using namespace std;
const int N=2e5+5; 
int n,t,i,q,x,y,z,t1=-1,a[N],p[N];
ll s;
int main() 
{
	cin>>n>>t;
	for (i=1;i<=n;i++)
	{
	        cin>>a[i];
	        s+=a[i];
	}
	for (i=1;i<=t;i++)
	{
		cin>>z>>x;
		if (z==1)
		{
			cin>>y;
			s+=y-(p[x]>t1?a[x]:q);
			a[x]=y;
			p[x]=i;
		}
		else 
		{
		        s=1ll*n*x,q=x,t1=i;
		}
		cout<<s<<endl;
	}
}  