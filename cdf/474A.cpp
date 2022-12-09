#include <iostream>
#include <string>
using namespace std;
int main() {
    char N; string x; string result;
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    cin >> N;
    cin >> x;
    for (int i = 0; i < x.length(); i++) {
        for (int j = 0; j < keyboard.length();j++) {
            if (x[i] == keyboard[j]) {
                if (N == 'R' && j != 0) {
                    result += keyboard[j - 1];
                }
                else if (N == 'L' && j != 29) {
                    result += keyboard[j + 1];
                }
                else if (N == 'L' && j == 29) {
                    result += keyboard[0];
                }
                else if (N == 'R' && j == 0) {
                    result += keyboard[29];
                }
            }
        }
    }
    cout << result;
    return 0;
}