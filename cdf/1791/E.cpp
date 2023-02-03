#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define ll long long
#define pb push_back
#define fi first
#define se second
#define endl "\n"

int solve() {
    int n; cin >> n;
    vector<int> v;
    ll numb = 0;
    ll sum = 0;
    for (int i = 0; i < n;i++) {
        int k; cin >> k;
        if (k < 0) {
            numb++;
            k = -k;
        }
        v.pb(k);
    }
    sort(v.begin(), v.end());
    if (numb % 2 == 0) {
        for (int i = 0; i < n;i++)
            sum += v[i];
        cout << sum << endl;
    }
    else {
        for (int i = 1; i < n;i++)
            sum += v[i];
        cout << sum - v[0] << endl;
    }
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