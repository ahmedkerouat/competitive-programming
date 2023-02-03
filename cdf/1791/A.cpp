#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define ll long long
#define pb push_back
#define fi first
#define se second
#define endl "\n"

int solve() {
    string s = "codeforces";
    char p; cin >> p;
    int ans = 0;
    for (int i = 0; i < s.length();i++)
        if (p == s[i]) {
            ans = 1; break;
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