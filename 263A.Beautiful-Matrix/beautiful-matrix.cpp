#include <iostream>
#include <cmath>

int main() {

    int row, col;

    for (int i=0; i < 5; ++i) {
        for (int j=0; j < 5; ++j) {
            int x;
            std::cin >> x;

            if (x == 1) {
                row = i;
                col = j;
            }
            
        }
    }

    int result = std::abs(row - 2) + std::abs(col - 2); 

    std::cout << result << std::endl;

    return 0;
}