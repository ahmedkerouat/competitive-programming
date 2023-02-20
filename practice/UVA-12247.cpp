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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    int n1 = 1, n2, n3, n4, n5;
    while (cin >> n1 >> n2 >> n3 >> n4 >> n5 && n1) {
        vector<int> v;
        int arr[3];
        v.pb(n1);v.pb(n2);v.pb(n3);
        sort(v.begin(), v.end());
        bool got = false;
        for (int i = 1; i <= 52; i++) {
            arr[0] = i;
            arr[1] = n4;
            arr[2] = n5;
            sort(arr, arr + 3);
            if ((i <= 52 && i != v[2] && i != v[1] && i != v[0] && i != n5 && i != n4) && (arr[1] > v[2] || arr[0] > v[1])) {
                cout << i << endl;
                got = true;
                break;
            }
        }
        if (!got)
            cout << -1 << endl;
    }
    return 0;
}