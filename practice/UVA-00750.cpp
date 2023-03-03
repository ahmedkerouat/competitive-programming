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

int a, b;
int rows[8];
int counter = 0;
bool place(int row, int col) {
    for (int i = 0; i < row; i++)
        if (rows[i] == col || abs(col - rows[i]) == abs(row - i))
            return false;
    return true;
}
void backtracking(int n) {
    if (n == 8 && rows[b - 1] == a) {
        counter++;
        if (counter < 10)
            cout << " ";
        cout << counter << "     ";
        for (int i = 0; i < 8; i++)
            cout << " " << rows[i];
        cout << endl;
        return;
    }
    else
        for (int i = 1; i <= 8; i++)
            if (place(n, i)) {
                rows[n] = i;
                backtracking(n + 1);
            }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);}
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        if (i)
            cout << endl;
        cout << "SOLN       COLUMN\n #      1 2 3 4 5 6 7 8\n\n";
        counter = 0;
        memset(rows, 0, sizeof(rows));
        backtracking(0);
    }
    return 0;
}