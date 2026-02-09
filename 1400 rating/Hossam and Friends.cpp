#include<iostream>
using namespace std;
 
typedef long long int ll;
 
int main(){
	ll t,n,m;
	cin >> t;
	ll arr[100500];
	ll a,b;
	ll sum = 0;
	ll i=0;
	while(t--){
		cin >> n >> m;
		for(i=0;i<n;i++)arr[i+1]=n+1;
		for(i =0 ;i<m;i++){
			cin >> a >> b;
			if(a>b){
				swap(a,b);
			}
			arr[a] = min(arr[a], b);
		}
		sum = 1;
		
		for(int i=n-1;i>=1;i--){
			arr[i] = min(arr[i],arr[i+1]);
			sum += arr[i]-i;
		}
		cout << sum << '\n';
	}
}