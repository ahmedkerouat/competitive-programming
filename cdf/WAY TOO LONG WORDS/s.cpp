#include <iostream>
#include <string>
int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::string a;
        std::cin >> a;
        int k = a.size();
        if (k > 10) {
            char last = a.at(k - 1);
            char first = a.at(0);
            std::cout << first << k - 2 << last << std::endl;
        }
        else {
            std::cout << a << std::endl;
        }

    }
    return 0;
}