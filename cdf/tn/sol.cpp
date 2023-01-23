#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define ll long long
#define pb push_back
#define fi first
#define se second
#define endl "\n"

void permute(string str, int l, int r, set<string>& v) {
    if (l == r) {
        v.insert(str);
        return;
    }
    for (int i = l; i <= r; i++) {
        swap(str[i], str[l]);
        permute(str, l + 1, r, v);
        swap(str[i], str[l]);
    }
}

int solve() {
    string f;
    set<string> v;
    cin >> f;
    permute(f, 0, f.size() - 1, v);
    cout << v.size() << endl;
    for (auto p : v)
        cout << p << endl;
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