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
    int n; cin >> n; cin.ignore();
    vector<string> f(n);
    vector<string> ans;
    for (int i = 0; i < n;i++)
        getline(cin, f[i]);
    for (int i = 0; i < n;i++) {
        int counter = 0;
        for (int j = 0; j < f[i].length(); j++) {
            if ((f[i][j] == ' ' && toupper(f[i][j + 1]) != s[counter]))
                break;
            if (f[i][j] == ' ' && toupper(f[i][j + 1]) == s[counter])
                counter++;
            if (j == 0 && toupper(f[i][0]) == s[0])
                counter++;
            if (counter == s.length() && j == f[i].length() - 1)
                ans.pb(f[i]);
        }
    }
    for (int i = 0; i < ans.size(); i++)
        for (int j = 0; j < ans[i].length(); j++) {
            if (j == 0)
                ans[i][j] = toupper(ans[i][j]);
            else if (ans[i][j] == ' ') {
                ans[i][j + 1] = toupper(ans[i][j + 1]);
                j++;
            }
            else
                ans[i][j] = tolower(ans[i][j]);

        }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;

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