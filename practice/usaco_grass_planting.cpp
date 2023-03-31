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
    int n;
    cin >> n;
    vi v(n - 1, 0);
    for (int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;
        x--; y--;
        v[x]++;
        v[y]++;
    }
    sort(v.rbegin(), v.rend());
    cout << v[0] + 1;
    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen("planting.in", "r", stdin);
    freopen("planting.out", "w", stdout);
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}