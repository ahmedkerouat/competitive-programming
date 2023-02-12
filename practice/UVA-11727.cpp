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

int solve(int n) {
    vi v(3);
    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin(), v.end());
    cout << "Case " << n << ": " << v[1] <<endl;
    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    int t;
    cin >> t;
    for(int i = 1; i <= t ; i++) {
        solve(i);
    }
    return 0;
}