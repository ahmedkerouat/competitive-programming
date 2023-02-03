#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define ll long long
#define pb push_back
#define fi first
#define se second
#define endl "\n"

int solve() {
    int counter = 0;
    int n; cin >> n;
    string s; cin >> s;
    int i = 0;
    int j = n - 1;
    while (i < j) {
        if (s[i] != s[j])
            counter++;
        else
            break;
        i++; j--;
    }
    cout << n - (counter * 2) << endl;
    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}