#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define endl "\n"

int solve() {
    int x; int y;
    cin >> x >> y;
    vector <pair<int, int>> v;
    for (int i = 0; i < x; i++) {
        int k;
        cin >> k;
        v.pb({ k,i + 1 });
    }
    sort(v.begin(), v.end());
    int i = 0; int j = v.size() - 1;
    while (i < j) {

        if (v[0].first + v[1].first > y || v[x - 1].first + v[x - 2].first < y)
            break;

        if (v[i].first + v[j].first == y) {
            cout << v[i].second << " " << v[j].second << endl;
            return 0;
        }
        if (v[i].first + v[j].first > y) {
            j--;
        }
        else {
            i++;
        }

    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}