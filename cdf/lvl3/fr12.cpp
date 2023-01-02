#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define endl "\n"

int solve() {
    string s;
    getline(cin, s);
    float arr[26] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
    float l = 0;
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            s[i] = toupper(s[i]);
            arr[(s[i] - 'A')]++;
            l++;
        }
    }
    for (int i = 0; i < 26; i++) {
        cout << (arr[i] / l) << endl;
    }
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