#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string input;
    std::cin >> input;

    std::sort(input.begin(), input.end());

    auto new_end = std::unique(input.begin(), input.end());

    if (std::distance(input.begin(), new_end) % 2 == 1){
        std::cout << "IGNORE HIM!" << std::endl;
    }
    else {
        std::cout << "CHAT WITH HER!" << std::endl;
    }
    
    return 0;

}