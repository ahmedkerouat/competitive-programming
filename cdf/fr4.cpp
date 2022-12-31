#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int solve() {
    int n; float diffMax; int ans = 0;
    cin >> n;
    cin >> diffMax;
    float arr[n];
    float finalarr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        finalarr[i] = arr[i];
    }
    for (int j = 0; j < n - 1; j++) {
        if (abs((finalarr[j] - finalarr[j + 1]) / 1.0) > diffMax) {
            for (int i = 1; i < n - 1; i++) {
                arr[i] = (finalarr[i + 1] + finalarr[i - 1]) / 2.0;
            }
            ans++;
            j = 0;
        }
        for (int i = 0; i < n; i++) {
            finalarr[i] = arr[i];
        }

    }
    cout << ans << endl;
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