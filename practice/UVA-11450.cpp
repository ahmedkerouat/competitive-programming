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
int dp[25][210];

int shop(int g, int money){
    if(money < 0)
        return -INF;
        
    if(g == c){
    	return m - money;
    }

    if(dp[g][money] != -1)
        return dp[g][money];

    int ans = -1;
    for(int i = 0; i < arr[g].size(); i++){
        ans = max(ans, shop(g+1, money - arr[g][i]));
    }
    return dp[g][money] = ans;
}

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
        int score = shop(0, m);
        if(score > 0)
        cout << score << endl;
        else
        cout << "no solution" << endl;
    }
    return 0;
}