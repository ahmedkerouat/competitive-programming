#include <iostream>
using namespace std;
int main() {
    int N = 1;
    int r = 0;
    cin >> N; // Number of test cases
    for (int i = 0; i < N; i++) {
        int h1; int h2; int h3;
        cin >> h1 >> h2 >> h3;
        if (h1 + h2 + h3 >= 2) {
            r++;
        }
    }
    cout << r << endl;
    return 0;
}