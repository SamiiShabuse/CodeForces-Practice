#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    string result = "";
    bool isFirst = true;

    // declare and init a dict (string -> int) {string_val : freq}
    unordered_map<char, int> freqMap;

    // Loop through each char by const reference
    for (char& c: s) {
        if (c != '+'){
            freqMap[c]++; 
        }
    }
    
    // turn key value pairs into a vector
    vector<pair<char, int>> vec(freqMap.begin(), freqMap.end());

    // sort vector by integer val (desecnding freq)
    sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
        return a.first < b.first;  
    });

    for (const auto& [key, value] : vec) {
        // append the key 'value' number of times
        for (int i = 0; i < value; ++i) {
            if (!isFirst) {
                result += "+";
            }
            result += key;
            isFirst = false;
        }
    }

    cout << result << endl;

    return 0;
}
