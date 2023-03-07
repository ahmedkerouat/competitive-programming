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

int x, n;
vi v;
vi w;
vi best;
int ans = -INF;

int dp[100005];

int backtrack(int x) {
    if (dp[x] == -1) {
        if (x < v[0] || v.empty()) {
            int r = accumulate(w.begin(), w.end(), 0);
            if (r > ans)
                best = w;
            return r;
        }
        else
            for (int i = 0; i < v.size(); i++)
                if (v[i] <= x) {
                    int a = v[i];
                    v.erase(v.begin() + i);
                    w.pb(a);
                    ans = max(backtrack(x - a), ans);
                    v.insert(v.begin() + i, a);
                    w.pop_back();
                }
        dp[x] = ans;
        return ans;
    }
    else
        return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    while (cin >> x >> n) {
        v.clear();
        w.clear();
        ans = -INF;
        memset(dp, -1, sizeof(dp));
        for (int i = 0; i < n; i++) {
            int k; cin >> k;
            v.pb(k);
        }
        sort(v.begin(), v.end());
        backtrack(x);
        for (int i = 0; i < best.size(); i++)
            cout << best[i] << " ";
        cout << "sum:" << ans << endl;
    }
    return 0;
}