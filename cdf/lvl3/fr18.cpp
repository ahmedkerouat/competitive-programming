#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define ll long long
#define pb push_back
#define endl "\n"

int ans = 0;
string m;

int solve() {
    string n;
    cin >> n;
    if (isupper(n[0]))
        n[0] = tolower(n[0]);

    if (cin.fail()) {
        cout << ans;
        return 0;
    }
    else {
        if (n == m)
            ans++;
        solve();
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> m;
    while (t--) {
        solve();
    }
    return 0;
}