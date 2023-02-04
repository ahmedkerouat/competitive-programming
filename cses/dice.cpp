#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define ll long long
#define pb push_back
#define fi first
#define se second
#define endl "\n"

int ans = 0;
const int MOD = 1000000007;
vector<int> dp(1000005);

void solve(int n) {
    if (dp[n] != -1) {
        ans = (ans + dp[n]) % MOD;
        return;
    }
    if (n == 0) {
        ans++;
        return;
    }
    if (n > 0) {
        int k = 6;
        if (n < k)
            k = n;
        for (int i = 1; i <= k; i++) {
            solve(n - i);
        }
        dp[n] = ans % MOD;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    int n;cin >> n;
    dp.assign(1000005, -1);
    while (t--) {
        solve(n);
    }
    cout << ans % MOD << endl;
    return 0;
}