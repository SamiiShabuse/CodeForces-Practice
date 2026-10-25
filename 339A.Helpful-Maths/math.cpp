#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int freq[4] = {0};

    // Count each number
    for (char c : s) {
        if (c != '+') {
            freq[c - '0']++;
        }
    }

    bool first = true;

    // Reconstruct in ascending order
    for (int num = 1; num <= 3; ++num) {
        for (int i = 0; i < freq[num]; ++i) {
            if (!first) cout << '+';

            cout << num;
            first = false;
        }
    }
    cout << endl;
    return 0;
}