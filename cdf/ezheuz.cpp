#include <iostream>
#include <string>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        cout << int(s[0] - '0') + int(s[2] - '0') << endl;
    }
    return 0;
}