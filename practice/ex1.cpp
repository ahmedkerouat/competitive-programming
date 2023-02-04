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

int solve() {
    int n; cin >> n;
    vii v;
    for (int i = 0; i < 2 * n; i++) {
        int k, u; cin >> k >> u;
        v.pb({ k,u });
    }
    sort(v.begin(), v.end());
    double ans = 0;
    for (int i = 0; i < v.size(); i += 2) {
        double ansx = v[i].fi - v[i + 1].fi;
        double ansy = v[i].se - v[i + 1].se;
        ans += sqrt(ansx * ansx + ansy * ansy) / 1.0;
    }
    cout << ans << endl;
    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}