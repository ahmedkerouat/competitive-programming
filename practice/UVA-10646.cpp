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

int solve(int& count) {
    count++;
    vector<string> f;
    for (int i = 0; i < 52; i++) {
        string s; cin >> s;
        f.pb(s);
    }
    cout << "Case " << count << ": " << f[32] << endl;
    // I saw that they put the same sample input twice.. It probably meant something.. (Yes)
    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    int t;
    cin >> t;
    int coun = 0;
    while (t--) {
        solve(coun);
    }
    return 0;
}