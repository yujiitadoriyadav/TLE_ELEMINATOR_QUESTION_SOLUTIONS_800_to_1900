#include<bits/stdc++.h>
using namespace std;
int t;
int main()
{
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		map<int,int>cnt;
		for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			for(int j=2;j*j<=x;j++){
                while(x%j==0)x/=j,++cnt[j];
            }
			if(x>1)++cnt[x];
		}
		bool ok=1;
		for(auto x:cnt)if(x.second%n)ok=0;
		puts(ok?"YES":"NO");
	}
	return 0;
}