#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define ll long long
#define pb push_back
#define fi first
#define se second
#define endl "\n"

int solve() {
    string s;
    cin >> s;
    cin.ignore();
    string f;
    getline(cin, f);
    string ans = "";
    for (int i = 0; i < f.length(); i++) {
        if (isalpha(f[i])) {
            if (isupper(f[i]))
                ans += toupper(s[f[i] - 'A']);
            else
                ans += s[f[i] - 'a'];
        }
        else
            ans += f[i];
    }
    std::cout << ans << endl;
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