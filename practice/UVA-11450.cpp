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

int m, c;
vector<int> arr[25];
int ans = 0;
int f = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        arr->clear();
        cin >> m >> c;
        memset(dp, -1, sizeof(dp));
        for (int i = 0; i < c; i++) {
            int g;
            cin >> g;
            vi v;
            for (int j = 0; j < g; j++) {
                int f; cin >> f;
                v.pb(f);
            }
            arr[i] = v;
        }
        backtrack(0);
        if (f)
            cout << f << endl;
        else
            cout << "no solution" << endl;
        f = 0;
        ans = 0;
    }
    return 0;
}