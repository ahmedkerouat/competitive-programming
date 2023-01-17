#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define ll long long
#define pb push_back
#define endl "\n"

int solve() {
    int n, x;
    cin >> n >> x;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int k = 0;
    while (sum + arr[k] <= x && k < n) {
        sum += arr[k];
        k++;
    }
    cout << k << endl;
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