#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define endl "\n"

int solve() {
    int n; int t; int ans = 1;int counter = 0;int max = 0; int qui;
    cin >> n;
    cin >> t;
    int arr[n];
    int tete[n];
    for (int i = 0; i < n; i++) {
        arr[i] = 0;
        tete[i] = 0;
    }
    for (int i = 0; i < t; i++) {
        int p; int d;
        cin >> p >> d;
        if (i != t - 1) {
            arr[p - 1] += d;
            if (arr[p - 1] > qui) {
                max = p - 1;
                qui = arr[p - 1];
                tete[max]++;
            }
            else if (arr[p - 1] == qui) {
                qui = 0;
                max = 0;
            }
            else {
                tete[max]++;
            }
        }
    }
    for (int i = 0; i < n;i++) {
        if (tete[i] > counter) {
            counter = tete[i];
            ans = i + 1;
        }
    }

    cout << ans << endl;
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