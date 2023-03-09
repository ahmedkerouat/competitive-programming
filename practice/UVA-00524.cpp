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

int n;
vi v;
void backtrack(int x) {
    if (v.size() == n && v[0] == 1 && (v[0] + v[n - 1] == 2 || v[0] + v[n - 1] == 3
        || v[0] + v[n - 1] == 5 || v[0] + v[n - 1] == 7 || v[0] + v[n - 1] == 11 ||
        v[0] + v[n - 1] == 13 || v[0] + v[n - 1] == 17 || v[0] + v[n - 1] == 19 || v[0] + v[n - 1] == 23 || v[0] + v[n - 1] == 29 || v[0] + v[n - 1] == 31)) {
        for (int i = 0; i < n; i++) {
            cout << v[i];
            if (i < n - 1)
                cout << " ";
        }
        cout << endl;
        return;

    }
    else {
        for (int i = 1; i <= n; i++)
            if ((x + i == 2 || x + i == 3 || x + i == 5 || x + i == 7 || x + i == 11 || x + i == 13 || x + i == 17 || x + i == 19 || x + i == 23 || x + i == 29 || x + i == 31)) {
                bool go2 = true;
                for (int j = 0; j < v.size(); j++)
                    if (v[j] == i) {
                        go2 = false;
                        break;
                    }
                if (go2) {
                    v.pb(i);
                    backtrack(i);
                    v.pop_back();
                }
            }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    int counter = 0;
    while (cin >> n) {
        v.clear();
        counter++;
        if (counter > 1)
            cout << endl;
        cout << "Case " << counter << ":\n";
        backtrack(1);
        v.pb(1);
    }
    return 0;
}