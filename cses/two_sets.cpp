#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define ll long long
#define pb push_back
#define fi first
#define se second
#define endl "\n"

int solve() {
    int n; cin >> n;
    int x = (n * (n + 1)) / 2;
    if (x % 2 == 0) {
        cout << "YES" << endl;
        set<int> s1, s2;
        int i = 0;int j = n; int y = 0;
        if (n % 2 == 0) {
            i = 1; y = 1;
        }
        while (i <= j) {
            if (i % 2 == 0) {
                s1.insert(i);
                s1.insert(j);
            }
            else {
                s2.insert(i);
                s2.insert(j);
            }
            i++; j--;
        }
        cout << (s1.size() - 1) + y << endl;
        for (auto p : s1)
            if (p != 0)
                cout << p << " ";
        cout << endl << s2.size() << endl;
        for (auto p : s2)
            if (p != 0)
                cout << p << " ";
    }
    else {
        cout << "NO" << endl;
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