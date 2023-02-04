#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define ll long long
#define pb push_back
#define fi first
#define se second
#define endl "\n"

ll ans = 0;
const int MOD = 1000000007;
ll dp[1000005];
vector<int> v;

void solve(int r, int n, ll temp) {
    if (n < v[0]) {
        if (n == 0) {
            ans = (ans + 1) % MOD;
        }
        return;
    }
    if (dp[n] != -1) {
        ans = (ans + dp[n]) % MOD;
        return;
    }
    for (int i = 0; i < r; i++) {
        solve(r, n - v[i], ans);
    }
    dp[n] = (ans - temp);
    dp[n] += MOD;
    dp[n] % MOD;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    int n, p;
    cin >> n >> p;
    for (int i = 0; i < n; i++) {
        int k;cin >> k;
        v.pb(k);
    }
    memset(dp, -1, sizeof dp);
    sort(v.begin(), v.end());
    while (t--) {
        solve(n, p, ans);
    }
    cout << ans % MOD << endl;
    return 0;
}