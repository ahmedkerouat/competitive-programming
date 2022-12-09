#include <iostream>
using namespace std;
int main() {
    int N;
    int counter = 0;
    cin >> N;
    for (int i = 1; i < (N / 2 + 1); i++) {
        if (N % i == 0) {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}