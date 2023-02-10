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

vi v;
int dp[100005];

int solve(int n) {
    if (n == 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    if (n > 1)
        dp[n] = min((abs(v[n] - v[n - 1]) + solve(n - 1)), (abs(v[n] - v[n - 2]) + solve(n - 2)));
    else
        dp[n] = abs(v[n] - v[n - 1]) + solve(n - 1);
    return dp[n];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    int n; cin >> n;
    for (int i = 0; i < n;i++) {
        int k; cin >> k;
        v.pb(k);
    }
    memset(dp, -1, sizeof dp);
    cout << solve(n - 1) << endl;
    return 0;
}