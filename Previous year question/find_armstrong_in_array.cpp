//PROBLEM STATEMENT: GIVEN AN INTEGER N, RETURN TRUE IT IS AN ARMSTRONG NUMBER
//OTHERWISE RETURN FALSE
//
//AN ARMSTRONG NUMBER IS A NUMBER THAT IS EQUAL TO THE SUM OF ITS
//OWN DIGITS EACH RAISED TO THE POWER OF THE NUMBER OF DIGITS.
//
//INPUT
//
//[153, 371, 1081]

// OUTPUT 153 371

#include <bits/stdc++.h>
using namespace std;

bool check_armstrong(int num) {
    int original = num; // Store original number
    int cnt = 0, temp = num;

    while (temp > 0) {
        cnt++;
        temp /= 10;
    }

    int sum = 0;
    temp = num;  // Reset temp to num

    while (temp > 0) {
        int r = temp % 10;
        int power = 1;
        for (int i = 0; i < cnt; i++)  // Compute power manually
            power *= r;
        sum += power;
        temp /= 10;
    }

    return sum == original; // Compare with the original number
}

int main() {
    string input;
    getline(cin, input);
    stringstream ss(input);
    vector<int> arr;
    string num;

    while (getline(ss, num, ',')) {
        arr.push_back(stoi(num));
    }

    for (int n : arr) {
        if (check_armstrong(n)) {
            cout << n << " ";
        }
    }

    return 0;
}

