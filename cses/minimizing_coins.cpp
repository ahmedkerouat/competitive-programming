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

vector<int> v;
int dp[1000005];

int solve(int n) {
    if (n < v[0]) {
        if (n == 0)
            return 0;
        else {
            return INF;
        }
    }
    if (dp[n] != -1)
        return dp[n];
    dp[n] = INF;
    for (int i = 0; i < v.size(); i++) {
        dp[n] = min(dp[n], solve(n - v[i]) + 1);
    }
    return dp[n];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    int t = 1;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        v.pb(k);
    }
    memset(dp, -1, sizeof dp);
    sort(v.begin(), v.end());
    while (t--) {
        int a = solve(m);
        if (a != INF)
            cout << a << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}