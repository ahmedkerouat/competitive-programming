#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define endl "\n"

int solve() {
    string s; string f; int ans = 1;
    getline(cin, s);
    string k = s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            s[i] = toupper(s[i]);
            f += s[i];
        }
    }
    for (int i = 0; i < f.length() - 1; i++) {
        if (f[((f.length() - 1) - i)] != f[i]) {
            ans = 0;
            break;
        }
    }
    if (ans)
        cout << k << endl;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        solve();
    }
    return 0;
}