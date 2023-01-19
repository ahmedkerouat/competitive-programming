#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define ll long long
#define pb push_back
#define endl "\n"

int solve() {
    int a;
    cin >> a;
    vector<pair<int, int>> v;
    vector<pair<int, int>> s;
    v.reserve(a);
    for (int i = 0; i < a; i++) {
        int l, g;
        cin >> l >> g;
        v.pb({ g, l });
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < a; i++) {
        if (s.empty() || (v[i].second >= s.back().first)) {
            s.pb({ v[i].first, v[i].second });
        }
    }
    cout << s.size() << endl;
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