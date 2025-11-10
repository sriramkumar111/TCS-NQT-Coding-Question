#include <bits/stdc++.h>
using namespace std;

string convertToNumber(string S) {
    unordered_map<string, char> numMap = {
        {"zero", '0'}, {"one", '1'}, {"two", '2'}, {"three", '3'}, 
        {"four", '4'}, {"five", '5'}, {"six", '6'}, {"seven", '7'}, 
        {"eight", '8'}, {"nine", '9'}
    };

    stringstream ss(S);
    string word, result = "";

    // Read words from the input string
    while (ss >> word) {
        if (numMap.find(word) != numMap.end()) {
            result += numMap[word]; // Append digit
        }
    }

    return result;
}

int main() {
    string S;
    getline(cin, S); // Read the full line including spaces

    cout << convertToNumber(S) << endl;

    return 0;
}

