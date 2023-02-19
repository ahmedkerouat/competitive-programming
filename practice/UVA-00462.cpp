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
    vector<string> v;
    string k;
    while (cin >> k) {
        v.pb(k);
        map<char, int> m;
        vector<pair<int, char>> s;
        map<char, bool> w;
        int s1 = 0, s2 = 0;
        for (int i = 0; i < 12; i++) {
            cin >> k;
            v.pb(k);
        }
        for (int i = 0; i < 13; i++) {
            if (isalpha(v[i][0])) {
                if (v[i][0] == 'A')
                    s1 += 4;
                if (v[i][0] == 'K')
                    s1 += 3;
                if (v[i][0] == 'Q')
                    s1 += 2;
                if (v[i][0] == 'J')
                    s1 += 1;
            }
            if (v[i][1] == 'S')
                m['S']++;
            if (v[i][1] == 'H')
                m['H']++;
            if (v[i][1] == 'D')
                m['D']++;
            if (v[i][1] == 'C')
                m['C']++;
        }
        for (int i = 0; i < 13; i++) {
            if (v[i][0] == 'K' && m[v[i][1]] - 1 < 1)
                s1--;
            if (v[i][0] == 'Q' && m[v[i][1]] - 1 < 2)
                s1--;
            if (v[i][0] == 'J' && m[v[i][1]] - 1 < 3)
                s1--;
            if (v[i][0] == 'A')
                w[v[i][1]] = 1;
            if (v[i][0] == 'K' && m[v[i][1]] > 1)
                w[v[i][1]] = 1;
            if (v[i][0] == 'Q' && m[v[i][1]] > 2)
                w[v[i][1]] = 1;
        }
        s2 = s1;
        if (m['H'] < 2)
            s2 += 2;
        if (m['S'] < 2)
            s2 += 2;
        if (m['D'] < 2)
            s2 += 2;
        if (m['C'] < 2)
            s2 += 2;
        if (m['H'] == 2)
            s2 += 1;
        if (m['S'] == 2)
            s2 += 1;
        if (m['D'] == 2)
            s2 += 1;
        if (m['C'] == 2)
            s2 += 1;

        s.pb({ m['H'], 'H' });
        s.pb({ m['D'], 'D' });
        s.pb({ m['S'], 'S' });
        s.pb({ m['C'], 'C' });
        sort(s.rbegin(), s.rend());

        if (s1 > 15 && w['H'] && w['S'] && w['C'] && w['D'])
            cout << "BID NO-TRUMP" << endl;
        else if (s2 > 13)
            cout << "BID " << s[0].second << endl;
        else
            cout << "PASS" << endl;
        v.clear();
    }
    return 0;
}