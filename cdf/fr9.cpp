#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define endl "\n"

int solve() {
    string s; string f = ""; int ans = 0; int n; char letter = 'A';
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
        if (isalpha(s[i])) {
            f += s[i];
        }
    }
    for (int i = 0; i < f.length(); i++) {
        n = count(f.begin(), f.end(), f[i]);
        if (n > ans) {
            ans = n;
            letter = f[i];
            if (ans > f.length() / 2) {
                cout << letter << endl;
                return 0;
            }
        }
    }
    cout << letter << endl;
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