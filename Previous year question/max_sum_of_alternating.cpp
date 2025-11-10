#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxFairSequenceSum(vector<int>& arr, int n) {
    vector<int> fairSeq;
    int sum = 0;
    
    bool expectPositive = (arr[0] > 0);  // Start with the sign of the first element

    for (int i = 0; i < n; i++) {
        if ((expectPositive && arr[i] > 0) || (!expectPositive && arr[i] < 0)) {
            fairSeq.push_back(arr[i]);
            sum += arr[i];  // Add to sum
            expectPositive = !expectPositive;  // Flip the expectation for the next element
        }
    }

    return sum;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) 
        cin >> arr[i];

    cout << maxFairSequenceSum(arr, n) << endl;
    return 0;
}
/* Understanding the Problem Statement
We are given an array of N integers, which includes both positive and negative numbers. Our goal is to find the maximum sum of elements possible while selecting elements in a fair sequence.

What is a Fair Sequence?
A fair sequence is a subsequence where the numbers strictly alternate between positive and negative.
For example, given an array:
A = [-1, 18, 13, 18, 2, 16, -1, -213, 11],
a valid fair subsequence could be:
[-1, 18, -1, 11] (negative ? positive ? negative ? positive)

Objective
Find the longest possible fair subsequence.
Compute the maximum sum among all possible fair subsequences.
Example Walkthrough
Example 1
Input
Copy
Edit
5
21 12 13 -21 -2
Processing
Start selecting numbers with an alternating pattern.
Possible sequences:
(21, -2) ? sum = 19 (Valid fair sequence of length 2)
(12, -21) ? sum = -9 (Not optimal)
(13, -2) ? sum = 11 (Valid but sum is smaller)
? Best choice: (21, -2)

Output
Copy
Edit
19
Efficient Approach (Greedy Algorithm)
Iterate through the array while maintaining the required alternating pattern.
Choose the largest possible element at each step (to maximize the sum).
Store results and continue until no more elements can be added. 
*/
