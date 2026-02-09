#include<bits/stdc++.h>
using namespace std;
int t,n,x,q,s[200010][32],l,k;
bool check(int mid)
{
	int num=0;
	for(int i=0;i<=31;i++)
		if(s[mid][i]-s[l-1][i]==mid-l+1)  num|=1<<i;
	return num>=k ;
}
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>x;
			for(int j=0;j<=31;j++)  s[i][j]=s[i-1][j]+(x>>j&1);
		}
		cin>>q;
		while(q--)
		{
			cin>>l>>k;
			int L=l,R=n;
			while(L<=R)
			{
				int mid=(L+R)>>1;
				if(check(mid))  
				{
					L=mid+1;
				}
				else  R=mid-1;
			}
			cout<<(R<l?-1:R)<<" ";
		}
		cout<<endl;
	}
}

#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
#define DEV_OP

// haad mein chhote 

void solve() {
   int n; cin>>n;
   vector<int>a(n),pref(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
    
   }
   pref[n-1]=a[n-1];
   for(int i=n-2;i>=0;i--){
       pref[i]=a[i]&pref[i+1];
   }
   int q; cin>>q;
   while(q--){
     int l,k; cin>>l>>k;
     l--;
     int ans=l;
     int andu =a[l];
    if(andu<k) {
        cout<<-1<<" ";
        continue;
    } 


  
    // for(int i=l;i<n;i++){
    //     andu=andu&a[i];

    //     if(andu<k) break;
    //     ans=i;

    // }

    /// binary laga bhen ke lode 
    int lo=l,h=n-1;
    while(lo<=h){
        int mid =(lo+h)/2;
        int temp = a[l];
        for(int i=l+1;i<=mid;i++){
            temp&=a[i];
            if(temp<k) break;
        }
        if(temp>=k){
            ans = mid;
            lo =mid+1;
        }
        else{
            h = mid-1;
        }
    }
     cout<<ans+1<<" ";
 
 
    
  
   }
   cout<<endl; 
}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}