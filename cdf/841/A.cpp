#include <bits/stdc++.h>
using namespace std;

#define ll long long

int solve() {
    int len; ll sum = 0;
    cin >> len;
    ll array[len];
    for (int i = 0; i < len; i++) {
        cin >> array[i];
    }
    sort(array, array + len);
    for (int j = 0; j < len; j++) {
        array[len - 1] = array[len - 1] * array[len - 2];
        array[len - 2] = 1;
        sort(array, array + len);
    }
    for (int k = 0; k < len; k++) {
        sum += array[k];
    }
    cout << sum * 2022 << "\n";
    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}