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
    //freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    int p = 0;
    while (t--) {
        p++;
        string f;
        cin >> f;
        vector<int> v;
        v.assign(100, 0);
        int j = 0;
        for (int i = 0; i < f.length(); i++) {
            if (f[i] == '+')
                v[j]++;
            if (f[i] == '-')
                v[j]--;
            if (f[i] == '>')
                j++;
            if (f[i] == '<')
                j--;
            if (j < 0)
                j = 99;
            if (j >= 100)
                j = 0;
            if (v[j] < 0)
                v[j] = 255;
            if (v[j] > 255)
                v[j] = 0;
        }
        cout << "Case " << p << ":";
        for (int i = 0; i < 100; i++) {
            stringstream ss;
            ss << hex << v[i];
            string res(ss.str());
            for (int j = 0; j < 2; j++) {
                if (res.length() < 2) {
                    res += res[0];
                    res[0] = '0';
                }
                if (isalpha(res[j]))
                    res[j] = toupper(res[j]);
            }
            cout << " " << res;
        }
        cout << endl;
    }
    return 0;
}