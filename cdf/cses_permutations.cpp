#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main()
{
    int n; cin >> n;
    if (n == 3 || n == 2) { cout << "NO SOLUTION" << endl;return 0; }
    if (n == 4) { cout << "2 4 1 3" << endl;return 0; }
    if (n % 2 == 1) {
        for (int i = n - 1; i > 1; i -= 2) {
            cout << i << " ";
        }
        for (int i = n; i > 0;i -= 2) {
            cout << i << " ";
        }
    }
    else {
        for (int i = n; i > 0; i -= 2) {
            cout << i << " ";
        }
        for (int i = n - 1;i > 0;i -= 2) {
            cout << i << " ";

        }
    }
    return 0;
}