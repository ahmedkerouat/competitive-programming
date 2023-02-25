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
    ll counter = 0;
    vi v;
    int n; cin >> n;
    for (int i = 0; i < (n + 1); i++) {
        int h; cin >> h;
        v.pb(h);
    }
    int d, k;
    cin >> d;
    cin >> k;
    for (int j = 1; j <= 100000000;j++) {
        ll a = 0;
        for (int i = 0; i < n + 1; i++) {
            if (!i)
                a += v[i];
            else
                a += v[i] * pow(j, i);
        }
        counter += d * j;
        if (counter >= k) {
            cout << a << endl;
            return 0;
        }

    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}