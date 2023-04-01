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
    vi v;
    bool b = 0;
    for (int i = 0;i < 40;i++) {
        if (n == 1) {
            b = 1;
            break;
        }
        if (n % 2 == 0)
            break;

        if (((n + 1) / 2) % 2 == 1) {
            n = (n + 1) / 2;
            v.push_back(1);
        }
        else if (((n - 1) / 2) % 2 == 1) {
            n = (n - 1) / 2;
            v.push_back(2);
        }
    }
    if (!b) {
        cout << "-1" << endl;
        return 0;
    }
    cout << v.size() << '\n';
    for (int i = v.size() - 1;i >= 0;i--) {
        cout << v[i] << ' ';
    }
    cout << endl;
    return 0;
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