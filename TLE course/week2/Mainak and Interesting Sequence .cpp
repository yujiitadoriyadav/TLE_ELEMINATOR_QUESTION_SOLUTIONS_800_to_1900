#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         int N, M;
    cin >> N >> M;

    // Check impossible cases
    if (M < N || (N % 2 == 0 && M % 2 != 0)) {
        cout << "NO\n";
        continue;
    }

    // If possible, construct the sequence
    cout << "YES\n";
    if (N % 2 == 1) { // Case 1: N is odd
        for (int i = 1; i < N; ++i) {
            cout << "1 ";
        }
        cout << M - N + 1 << '\n';
    } else { // Case 2: N is even
        for (int i = 2; i < N; ++i) {
            cout << "1 ";
        }
        cout << (M - N + 2) / 2 << ' ' << (M - N + 2) / 2 << '\n';
    }

    }
}