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
    int t; cin >> t;
    if (t == 0)
    return 0;
    else{
        int x,y;
        cin >> x >> y;
        while(t--){
            int j,k;
            cin >> j >> k;
            if (j == x || k == y)
            cout << "divisa" << endl;
            else if (j < x && k < y)
            cout << "SO" << endl;
            else if (j > x && k > y)
            cout << "NE" << endl;
            else if (j < x && k > y)
            cout << "NO" << endl;
            else
            cout << "SE" << endl;
        }
    }
    solve();
    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
        solve();
    return 0;
}