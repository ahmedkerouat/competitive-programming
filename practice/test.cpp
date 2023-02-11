#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
int test_pi() {
    double pi = 2 * acos(0);
    int n;
    cin >> n;
    cout.precision(n + 1);
    cout << pi << endl;
    return 0;
}

int test_random() {
    int n;cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        s.insert(k);
    }
    for (auto p : s)
        cout << p << endl;
    return 0;
}

int birthdays() {
    int n;cin >> n;
    vector<iii> s;
    for (int i = 0; i < n; i++) {
        int m, d, y;
        cin >> m >> d >> y;
        s.push_back({ m, { d,y } });
    }
    sort(s.begin(), s.end());
    return 0;
}

int alphabet_permutations() {
    string alph = "ABCDEFGHIJ";
    do {
        cout << alph << " ";
    } while (next_permutation(alph.begin(), alph.end()));
    return 0;
}

int speword() {
    while (!cin.fail()) {
        string s; cin >> s;
        if (s.length() == 3) {
            if (isdigit(s[2]) && isdigit(s[1]) && isalpha(s[0]))
                s = "***";
        }
        cout << s << " ";
    }
    return 0;
}

int main() {
    return 0;
}