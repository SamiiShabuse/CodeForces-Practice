#include <iostream>
#include <cmath>

int main() {
    int M, N;

    int domino_size = 2*1;

    std::cin >> M >> N;

    int result = static_cast<int>(std::floor( (M*N) / domino_size));
    
    std::cout << result << std::endl;

    return 0;
    
}