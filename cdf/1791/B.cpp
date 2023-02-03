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
    string s; cin >> s;
    int ans = 0;
    pair<int, int> co = { 0,0 };
    for (int i = 0; i <= n;i++) {
        if (co.fi == 1 && co.se == 1) {
            ans = 1;break;
        }
        if (s[i] == 'U')
            co.fi++;

        if (s[i] == 'D')
            co.fi--;

        if (s[i] == 'L')
            co.se--;

        if (s[i] == 'R')
            co.se++;
    }
    if (ans) {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}