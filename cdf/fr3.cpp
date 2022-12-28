#include <bits/stdc++.h>
using namespace std;

#define ll long long

int solve() {
    string s;
    cin >> s;
    for (int j = 1; j < s.length(); j++) {
        if (s[j] == s[j - 1]) {
            s.replace(j - 1, 2, "");
            j = 0;
        }

    }
    cout << s;
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