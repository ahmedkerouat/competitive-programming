#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int c;int k; int odd = 0;int min = 21;
        cin >> c;
        for (int j = 0; j < c; j++) {
            cin >> k;
            int h = 0;
            if (k % 2 != 0) {
                odd++;
                while (k % 2 != 0) {
                    k /= 2;
                    h++;
                }
                if (h < min) {
                    min = h;
                }
            }
            else {
                h = 0;
                while (k % 2 == 0) {
                    k /= 2;
                    h++;
                }
                if (h < min) {
                    min = h;
                }
            }
        }
        if (odd % 2 == 0) {
            cout << 0 << endl;
        }
        else {
            cout << min << endl;
        }
    }
    return 0;
}