#include <iostream>
#include <string>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int l; string s; string r; int k = 0;
        cin >> l;
        cin >> s;
        for (int j = 0; j < l; j++) {
            if (j != l - 1) {
                if (s[j] == '1') {
                    k++;
                }
                if (s[j + 1] == '1' && k % 2 != 0 && k != 0) {
                    r += '-';
                }
                else {
                    r += '+';
                }
            }
        }
        cout << r << endl;
    }
    return 0;
}