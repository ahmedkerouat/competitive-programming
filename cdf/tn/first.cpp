#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define ll long long
#define pb push_back
#define fi first
#define se second
#define endl "\n"

int solve() {
    string s;
    cin >> s;
    int ans = 0;
    vector<int> u, v;
    for (int i = 0; i < s.size();i++) {
        if (s[i] == 'L') {
            u.pb(1);
            v.pb(1);
        }
        if (s[i] == 'S') {
            u.pb(3);
            v.pb(3);
        }
        if (s[i] == 'M') {
            u.pb(2);
            v.pb(2);
        }
    }
    sort(v.begin(), v.end());
    vector<int> result;
    for (int i = 0; i < u.size(); i++) {
        int a = (u[i] ^ v[i]);
        if (a != 0)
            ans++;
    }
    if (ans % 2 == 0)
        cout << ans / 2 << endl;
    else
        cout << (ans + 1) / 2 << endl;
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