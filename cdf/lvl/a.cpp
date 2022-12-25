// DIDNT WORK ON TEST 6
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int l = s.length();

    bool valid = true;
    for (int i = 0; i < l; i++) {
        if (s[i] != s[i % (l / 2)]) {
            valid = false;
            break;
        }
    }

    if (l % 2 == 0) {
        valid = false;
    }

    if (valid) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}