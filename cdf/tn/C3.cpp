#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define ll long long
#define pb push_back
#define fi first
#define se second
#define endl "\n"

int solve() {
    int k; int ans = 0;
    cin >> k;
    string a;
    string b;
    cin >> a;
    cin >> b;
    for (int i = 0; i < k; i++) {
        if (a[i] != b[i] && (a[i - 1] == b[i - 1]))
            ans++;
    }
    cout << ans << endl;
    return 0;
}

int main() {
    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}