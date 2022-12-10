#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n; int a; int b; int k;
        cin >> n >> a >> b;
        if (a < b) {
            k = 1;
        }
        else {
            k = round(n / a);
        }
        cout << k << endl;
    }
    return 0;
}