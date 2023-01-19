#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define ll long long
#define pb push_back
#define endl "\n"

int solve() {
    int t;
    ll ans = 0;
    cin >> t;
    vector<int> v;
    for (int i = 0; i < t; i++) {
        int k;
        cin >> k;
        v.pb(k);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < t; i++) {
        int g = v[i] - v[t / 2];
        if (g < 0)
            ans += -g;
        else
            ans += g;
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