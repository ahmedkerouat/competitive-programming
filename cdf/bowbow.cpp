#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int counter = s.length() - 1;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == '1') {
            counter++;
            break;
        }
    }
    if (counter % 2 != 0) {
        counter++;
    }
    cout << counter / 2 << endl;

    return 0;
}