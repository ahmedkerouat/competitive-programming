#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define ll long long
#define pb push_back
#define endl "\n"

int solve() {
    int t;
    cin >> t;
    set < pair<string, string>> s;
    for (int i = 0; i < t; i++) {
        string k; string j;
        cin >> k >> j;
        s.insert({ j,k });
    }
    for (auto p : s)
        cout << p.first << " " << p.second << endl;

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