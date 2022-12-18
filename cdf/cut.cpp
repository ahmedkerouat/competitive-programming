#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int n; string s; int ans = 0;
        cin >> n;
        cin >> s;
        if (n > 1352) {
            ans++;
        }
        else {
            for (int k = 2; k < n - 1; k++) {
                for (int j = 0; j < n - 1; j++) {
                    if (j + k < n - 1) {
                        if (s[j] == s[j + k] && s[j + 1] == s[j + 1 + k]) {
                            ans++;
                            break;
                        }
                    }
                }
            }
        }
        if (ans > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}