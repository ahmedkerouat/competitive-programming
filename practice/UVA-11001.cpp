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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    int v0 = 1, vtot = 1;
    while (cin >> vtot >> v0) {
        double v = vtot;
        int counter = 1;
        vector<pair<double, int>> anss;
        while (v > v0) {
            double ans = 0.3 * sqrt(v - v0) * counter;
            anss.pb({ ans, counter });
            counter++;
            v = vtot / (counter * 1.0);
        }
        sort(anss.rbegin(), anss.rend());
        if (anss.size() > 1) {
            if (abs(anss[1].fi - anss[0].fi) < 1e-6)
                cout << 0 << endl;
            else
                cout << anss[0].se << endl;
        }
        else if (anss.size() == 1)
            cout << anss[0].se << endl;
        else if (!anss.size() && v0)
            cout << 0 << endl;
    }
    return 0;
}