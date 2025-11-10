#include <iostream>
#include <sstream>
#include <vector>
#include <iomanip>
using namespace std;

void exerciseTracker(const string &log) {
    vector<int> numbers;
    stringstream ss(log);
    string word;
    int num, total = 0;

    // Extract numbers from the text
    while (ss >> word) {
        if (stringstream(word) >> num) {
            numbers.push_back(num);
            total += num;
        }
    }

    // Compute average
    double average = (double)total / numbers.size();

    // Print results
    cout << "Total: " << total << endl;
    cout << "Average: " << fixed << setprecision(2) << average << endl;
}

int main() {
    string log;
    
    // Taking user input
    cout << "Enter your workout log: ";
    getline(cin, log);

    // Process and display results
    exerciseTracker(log);

    return 0;
}




/*Problem: The Exercise Tracker

A man follows a strict workout routine every day. He logs his exercise details in a text format, mentioning the number of repetitions for different exercises. Your task is to

1. Extract all numbers from his workout log.

2. Compute the total (sum) of exercises performed.

3. Find the average number of repetitions per exercise.

Example 1

Input:

plaintext

"Today I did 20 push-ups, 15 squats, and 30 jumping jacks."

Output:

plaintext

Total: 65

Average: 21.67

Explanation:

Extracted numbers: 20, 15, 30

Sum: 20-15+30-65

Average: 65/3-21.67

Example 2

Input:

plaintext

"In the morning, I completed 10 pull-ups, 25 lunges, and 50 sit-ups. At

more push-ups."

Output:

plaintext

Total: 125

Average: 31.25

Explanation:

Extracted numbers: 10, 25, 50, 40

Sum: 10+25+50-40-125

Average: 125/4-31.25

Constraints

The input sentence will always contain at least one number.

The numbers represent "positive integer values.

The result should be rounded to "two decimal places for the averag */
