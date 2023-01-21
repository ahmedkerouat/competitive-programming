#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define ll long long
#define pb push_back
#define fi first
#define se second
#define endl "\n"

int solve() {
    int t;
    cin >> t;
    vector<pair<int, int>> v;
    for (int i = 0; i < t; i++) {
        int k; int u; cin >> k >> u;
        v.pb({ k,u });
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    ll time = 0;
    for (int i = 0; i < t; i++) {
        time += v[i].fi;
        ans += v[i].se - time;
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