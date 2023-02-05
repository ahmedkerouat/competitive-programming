#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define endl "\n"
#define INF 1000000000
#define MOD 1000000007

int ans = 0;

int solve(int n) {
    while (n != 0) {
        string s = to_string(n);
        sort(s.rbegin(), s.rend());
        n -= int(s[0] - '0');
        ans++;
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    int t, n;
    t = 1;cin >> n;
    while (t--) {
        solve(n);
    }
    cout << ans << endl;
    return 0;
}