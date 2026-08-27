#include <iostream>
#include <string>

int main() {
    int x = 0;    
    int numbers;
    std::cin >> numbers;

    for (int i=0; i < numbers; i++) {
        std::string increment; 

        std::cin >> increment;

        if (increment == "++X" || increment == "X++")
            x++;
        if (increment == "--X" || increment == "X--")
            x--;  
    }
    
    std::cout << x << std::endl;

    return 0;
}