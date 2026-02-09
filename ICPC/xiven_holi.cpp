#include <iostream>
using namespace std;

const int MOD = 1000000007;


int ans(int n) {
    if (n == 1) return 0;
    if (n== 2) return 1;

    long long dp[n+1];
    dp[0] = 1; 
    dp[1] = 0; 
    dp[2] = 1; 

    for (int i=3; i<=n; i++) {
        dp[i] = (i-1) * (dp[i-1] + dp[i-2]) % MOD;
    }

    return dp[n];
}

int main() {
    int N;
    cin >> N;
    cout <<ans(N) << endl;

}