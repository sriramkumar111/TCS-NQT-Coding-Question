#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findMinimumRowMedian(int N, int P, vector<vector<int>> &matrix) {
    vector<int> elements;

    // Flatten the matrix into a single list of elements
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            elements.push_back(matrix[i][j]);
        }
    }

    // Sort the elements in non-decreasing order
    sort(elements.begin(), elements.end());

    // Rearrange the elements into rows again
    vector<vector<int>> rearrangedMatrix(N, vector<int>(N));
    int idx = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            rearrangedMatrix[i][j] = elements[idx++];
        }
    }

    // Calculate the medians of each row
    vector<int> medians;
    for (int i = 0; i < N; i++) {
        sort(rearrangedMatrix[i].begin(), rearrangedMatrix[i].end());
        int median = rearrangedMatrix[i][N / 2]; // Middle element
        medians.push_back(median);
    }

    // Calculate the sum of medians
    int medianSum = 0;
    for (int median : medians) {
        medianSum += median;
    }

    // Check if the sum exceeds the tolerance
    if (medianSum > P) {
        return -1;
    }

    // Return the minimum of the medians
    return *min_element(medians.begin(), medians.end());
}

int main() {
    int N, P;
    cin >> N >> P;
    
    vector<vector<int>> matrix(N, vector<int>(N));
    
    // Input the matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    // Compute and output the result
    int result = findMinimumRowMedian(N, P, matrix);
    cout << result << endl;

    return 0;
}

/*
Q2. You have a storeroom in your house. The storeroom is a square type and 
has sides of length N.

Your mom has divided the room into a 2-dimensional matrix M. 
In each cell of that matrix, there is a box and has weight
 Wij (for all i<=N and j<=N).

As you are a mathematician, you are very much interested in the median concept. 
So, your mom gave you a task to test your intelligence.

You have to find the minimum of all row medians (weights) as maximum possible by
 rearranging the 2 dimensional matrix M. But you have a limit.

You are accepted to rearrange if and only if the sum of median weights 
of N rows should not exceed tolerance if it is not possible to rearrange
 the matrix M for a minimum of time, then print -1,

Input: 4 198 -> N and P values
34 77 72 65 -> 1st row of length 4
49 70 71 15 -> 2nd row of length 4
12 84 5 78 -> 3rd row of length 4
74 1 26 60 -> 4th row of length 4

• Output: 26
• Explanation: Here we can rearrange the 2-d matrix as k > sum of all row medians. 
But how many possible re-arrangements we do we will get the same minimum median
 of all rows is 26.
*/
