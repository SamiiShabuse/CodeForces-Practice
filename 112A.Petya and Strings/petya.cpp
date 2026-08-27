#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

int main() {
    std::string a, b;
    std::cin >> a >> b;

    std::transform(a.begin(), a.end(), a.begin(), ::tolower);
    std::transform(b.begin(), b.end(), b.begin(), ::tolower);

    if (a < b)
        std::cout << -1;
    else if (a > b)
        std::cout << 1;
    else
        std::cout << 0;
}