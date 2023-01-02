#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define endl "\n"

int solve() {
    string s; int n;
    cin >> s >> n;
    int ans = int(s[0] - 'A' + 1);
    int al = int(('A' - 1) + n);
    cout << ans << char(al) << endl;
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