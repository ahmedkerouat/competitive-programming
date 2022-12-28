#include <bits/stdc++.h>
using namespace std;

#define ll long long

int solve() {
    int n;
    cin >> n;
    string th;

    for (int i = 0; i < n; i++) {
        int k = 0;int tr = 0;
        for (int j = 0; j < (n * 2) - 1; j++) {
            cout << char('a' + k);
            if (i < n - 1) {
                th = char('a' + k) + th;
            }
            if (tr < i) {
                k++;
            }
            else {
                if (j >= (((n * 2) - 2) - k) && k > 0) {
                    k--;
                }
            }
            tr++;
        }
        if (i < n - 1) {
            cout << "\n";
            th = "\n" + th;
        }
    }
    cout << th;
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