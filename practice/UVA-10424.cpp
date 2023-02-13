#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define endl "\n"
#define INF 1000000000
#define MOD 1000000007


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    string s1, s2;
    while (cin >> s1 >> s2) {
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < s1.length(); i++)
            if (isalpha(s1[i]))
                sum1 += tolower(s1[i]) - 'a' + 1;
        for (int i = 0; i < s2.length(); i++)
            if (isalpha(s2[i]))
                sum2 += tolower(s2[i]) - 'a' + 1;
        string h = "aa", p = "aa";
        while (h.length() > 1) {
            h = to_string(sum1);
            sum1 = 0;
            for (int i = 0; i < h.length(); i++)
                sum1 += h[i] - '0';
        }
        while (p.length() > 1) {
            p = to_string(sum2);
            sum2 = 0;
            for (int i = 0; i < p.length(); i++)
                sum2 += p[i] - '0';
        }
        double ans = ((sum2) / 1.0) / ((sum1) / 1.0);
        cout.precision(4);
        cout << ans * 100 << " %" << endl;
    }
    return 0;
}