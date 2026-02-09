#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define all(x) x.begin(), x.end()
const int mod = 1e9+7;

void solve() {
    int n; cin >> n;
    vector<int> a(n+2);
    for(int i=1; i<=n; i++) cin >> a[i];
    a[0] = 0;
    a[n+1] = 0;

    vector<pair<int,pair<int,int>>> ans;
    int cnt2=0, cnt0=0, cntneg=0;
    int firstneg=-1, lastneg=-1;
    int stzero=-1, edzero=-1;

    for(int i=0; i<=n+1; i++) {
        if (a[i] == 0) {
            cnt0++;
            edzero = i;
            if (cnt0 >= 2) {
                if (cntneg % 2 == 0) {
                    ans.push_back({cnt2, {stzero+1, edzero-1}});
                } else {
                    int cnt2first=0, cnt2last=0;
                    for (int j = stzero+1; j <= firstneg; j++)
                        if (abs(a[j]) == 2) cnt2first++;
                    for (int j = lastneg; j <= edzero-1; j++)
                        if (abs(a[j]) == 2) cnt2last++;

                    if (cnt2first > cnt2last) {
                        ans.push_back({cnt2-cnt2last, {stzero+1, lastneg-1}});
                    } else {
                        ans.push_back({cnt2-cnt2first, {firstneg+1, edzero-1}});
                    }
                }
                // reset
                cnt2=cntneg=0;
                firstneg=lastneg=-1;
                stzero=i;
            } else {
                stzero = i;
            }
        } else {
            if (abs(a[i]) == 2) cnt2++;
            if (a[i] < 0) {
                cntneg++;
                if (firstneg == -1) firstneg = i;
                lastneg = i;
            }
        }
    }

    sort(all(ans));
    auto best = ans.back();
    cout << best.second.first-1 << " " << n - best.second.second << "\n";
}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) solve();
    return 0;
}
