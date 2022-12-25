#include <iostream>

int main()
{
    int A, B;
    std::cin >> A >> B;

    for (int C = 1; C <= A / 2; C++) {
        int D = A - C;
        if (C * D == B) {
            std::cout << C << " " << D << std::endl;
            return 0;
        }
    }
    return 0;
}