#include <iostream>
#include <vector>

int main() {
    int n, k;
    std::cin >> n >> k;

    int count = 0;
    
    std::vector<int> scores(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> scores[i];
    }

    int kthScore = scores[k-1];

    for (int i = 0; i < n; i++) {
        if (scores[i] >= kthScore && scores[i] > 0) count++; 
    }

    std::cout << count << std::endl;

}
