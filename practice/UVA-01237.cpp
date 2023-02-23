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

void solve() {
    int n; cin >> n;
    vector<pair<string, ii>> v;
    for (int i = 0; i < n; i++) {
        string f; int a, b;
        cin >> f >> a >> b;
        v.pb({ f,{a,b} });
    }
    int m; cin >> m;
    for (int i = 0; i < m; i++) {
        int o; cin >> o;
        int ans = 0;
        int k = 0;
        for (int j = 0; j < n; j++)
            if (v[j].se.fi <= o && o <= v[j].se.se) {
                ans++; k = j;
            }
        if (ans != 1)
            cout << "UNDETERMINED\n";
        else
            cout << v[k].fi << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        if (i)
            cout << endl;
        solve();
    }
    return 0;
}