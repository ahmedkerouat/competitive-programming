#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define endl "\n"
#define pb push_back

int solve() {
    int n;
    cin >> n;
    cin.ignore();
    string old = "";
    for (int i = 0; i < n; i++) {
        string k;
        getline(cin, k);
        if (i == 0) {
            old = k;
            cout << k << endl;
        }
        else {
            for (int j = 0; j < old.length(); j++) {
                if (k[j] > old[j]) {
                    old = k;
                    cout << k << endl;
                    break;
                }
                else if (k[j] < old[j]) {
                    break;
                }
            }
        }

    }
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