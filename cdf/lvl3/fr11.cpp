#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define endl "\n"

int solve() {
    string s; int ans = 1;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i]) || s[i] == '_' || (isdigit(s[i]) && i > 0)) {
        }
        else {
            ans = 0;
            break;
        }
    }
    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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