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

void solve(int k) {
    vii v;
    for (int x = k + 1; x <= (2 * k); x++) {
        int y = (k * x) / (x - k);
        if (1 == ((1.0 * k) / y + (1.0 * k) / x))
            v.pb({ y,x });
    }
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << "1/" << k << " = 1/" << v[i].fi << " + 1/" << v[i].se << endl;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    int k;
    while (cin >> k && k) {
        solve(k);
    }
    return 0;
}