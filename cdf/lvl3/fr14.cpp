#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define endl "\n"

int solve() {
    int n;
    cin >> n;
    cin.ignore();
    string s[n];
    for (int i = 0; i < n; i++) {
        getline(cin, s[i]);
    }
    sort(s, s + n);
    for (int i = 0; i < n; i++)
        cout << s[i] << endl;
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