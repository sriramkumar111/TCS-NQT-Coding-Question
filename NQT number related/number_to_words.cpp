#include <bits/stdc++.h>
using namespace std;

// Arrays for number words
string ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
                 "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", 
                 "seventeen", "eighteen", "nineteen"};

string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

// Function to convert number into words
string numberToWords(int num) {
    if (num == 0) return "zero";  // Special case for zero

    string result = "";

    if (num / 1000 > 0) {
        result += ones[num / 1000] + " thousand ";
        num %= 1000;  // Remove thousands place
    }
    
    if (num / 100 > 0) {
        result += ones[num / 100] + " hundred ";
        num %= 100;  // Remove hundreds place
    }
    
    if (num > 0) {
        if (!result.empty()) result += "and ";  // Add 'and' before last part

        if (num < 20) {  // Numbers from 1 to 19
            result += ones[num];
        } else {  // Numbers from 20 to 99
            result += tens[num / 10];  
            if (num % 10 > 0) result += " " + ones[num % 10];  
        }
    }

    return result;
}

int main() {
    int num;
    cin >> num;

    cout << numberToWords(num) << endl;

    return 0;
}

