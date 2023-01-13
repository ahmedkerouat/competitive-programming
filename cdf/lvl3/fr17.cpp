#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define ll long long
#define pb push_back
#define endl "\n"

int ans = 0;

int solve() {
    int n;
    cin >> n;
    if (cin.fail()) {
        cout << ans;
        return 0;
    }
    else {
        ans += n;
        solve();
    }
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