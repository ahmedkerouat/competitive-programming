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
    vector<int> ans(s.length());
    ans.assign(s.length(), 1);
    int k = 0;
    for (int i = 1; i < s.length();i++) {
        if (s[i] == s[i - 1])
            ans[k]++;
        else
            k++;
    }
    sort(ans.rbegin(), ans.rend());
    cout << ans[0] << endl;
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