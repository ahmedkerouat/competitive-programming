#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define ll long long
#define pb push_back
#define fi first
#define se second
#define endl "\n"

int solve() {
    int n; cin >> n;
    vector<int> v(n); ll tot = 0;
    for (int i = 0; i < n;i++) {
        cin >> v[i];
        tot += v[i];
    }
    ll ans = INT_MAX;
    for (int i = 0; i < (1 << n); i++) {
        ll sub = 0;
        for (int j = 0; j < n;j++) {
            if (i & (1 << j)) {
                sub += v[j];
            }
        }
        ll k = abs(tot - 2 * sub);
        ans = min(ans, k);
    }
    cout << ans << endl;
    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}