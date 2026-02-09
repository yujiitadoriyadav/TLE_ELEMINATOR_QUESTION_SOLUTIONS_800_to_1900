#include <bits/stdc++.h>
using namespace std;
#include <numeric>

int main() {
    ios::sync_with_stdio(false);  // Speed up I/O
    cin.tie(0);

    int n, q;
    cin >> n >> q;

   
    vector<long long> x(n+1,0);
    for (int i = 1; i <=n; i++) {
        long long v;
        cin>>v;
        
        x[i]=v+x[i-1];
    }

    
    while (q--) {
        int a, b;
        cin >> a >> b;
       cout<<x[b]-x[a-1]<<endl;
    }

    return 0;
}
