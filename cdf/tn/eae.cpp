#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define ll long long
#define pb push_back
#define endl "\n"

int solve() {
    int x; int y;
    cin >> x >> y;
    vector<string> q;
    for (int i = 0; i < x; i++) {
        string n; string s;
        cin >> n >> s;
        if (s == "in") {
            q.pb(n);
        }
        else if (y > 0 && n == q.front()) {
            y--;
            q.pop_back();
        }
    }
    for (int i = 0; i < q.size(); i++) {
        cout << q[i] << endl;
    }
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