#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define ll long long
#define pb push_back
#define endl "\n"

int solve() {
    for (char i = 'a'; i <= 'z'; i = i + 1) {
        if (i != 'a' && i != 'e' && i != 'o' && i != 'u' && i != 'i' && i != 'y')
            cout << i << " ";
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