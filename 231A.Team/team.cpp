#include <iostream>


int main() {
    int n;
    std::cin >> n;
    int total = 0;

    for (int i = 0; i < n; ++i) {
        int petya, vasya, tonya;

        std::cin >> petya >> vasya >> tonya;

        if (petya + vasya + tonya >= 2) {
            total++;
        }
    }

    std::cout << total << std::endl;

    return 0;
}