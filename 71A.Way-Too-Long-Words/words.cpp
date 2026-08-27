#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> results(n);

    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;

        int len = word.length();

        if (len > 10) {
            results.push_back(word[0] + to_string(len - 2) + word[len - 1]);
        } else {
            results.push_back(word);
        }
    }

    for (string result: results) {
        cout << result << "\n";
    }

    return 0;

}