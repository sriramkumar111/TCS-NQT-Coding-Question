#include <bits/stdc++.h>
using namespace std;
//  car arc
 c=1-1 =0 
 a=-1+1 =0 
r =-1+1 =0
 



bool is_anagram(string input1, string input2) {
    if (input1.length() != input2.length()) return false;  // If lengths differ, not anagrams

    map<char, int> freq;

    // Increment for input1 and decrement for input2
    for (int i = 0; i < input1.length(); i++) {
        freq[input1[i]]++;
        freq[input2[i]]--;
    }

    // Check if all counts are zero
    for (auto it : freq) {
        if (it.second != 0) return false;
    }

    return true;
}

int main() {
    string input1, input2;
    cin >> input1 >> input2;  // Works only for single words

    cout << (is_anagram(input1, input2) ? "yes" : "no") << endl;

    return 0;
}

