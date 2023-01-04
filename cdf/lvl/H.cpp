#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define endl "\n"

int solve() {
    int n;
    cin >> n;
    set<int> k;
    for (int i = 0; i < n; i++) {
        int u;
        cin >> u;
        k.insert(u);
    }
    cout << k.size() << endl;;
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