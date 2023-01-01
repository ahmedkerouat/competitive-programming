#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define endl "\n"

int result(int ans) {
    string t = to_string(ans);
    if (ans >= 10) {
        ans = 0;
        for (int i = 0; i < t.length(); i++) {
            ans += int(t[i] - '0');
        }
    }
    return ans;
}

int solve() {
    string s1; string s2;
    cin >> s1 >> s2;
    int ans1 = 0; int ans2 = 0;
    for (int i = 0; i < s1.length(); i++) {
        ans1 += int(s1[i] - 'A');
    }
    for (int i = 0; i < s2.length(); i++) {
        ans2 += int(s2[i] - 'A');
    }
    while (ans1 >= 10) {
        ans1 = result(ans1);
    }
    while (ans2 >= 10) {
        ans2 = result(ans2);
    }
    cout << ans1 << " " << ans2 << endl;
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