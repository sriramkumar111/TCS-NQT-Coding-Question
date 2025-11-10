#include <bits/stdc++.h>
using namespace std;

// Function to generate and print all subsequences
void generateSubsequences(vector<int> &arr, vector<int> &subseq, int index) {
    if (index == arr.size()) {
        // Print the current subsequence
        cout << "{ ";
        for (int num : subseq) {
            cout << num << " ";
        }
        cout << "}" << endl;
        return;
    }

    // Exclude the current element and move to the next
    generateSubsequences(arr, subseq, index + 1);

    // Include the current element and move to the next
    subseq.push_back(arr[index]);
    generateSubsequences(arr, subseq, index + 1);
    
    // Backtrack to remove the last element added
    subseq.pop_back();
}

int main() {
    vector<int> arr = {1, 2, 3};  // Example array
    vector<int> subseq;

    cout << "All subsequences:" << endl;
    generateSubsequences(arr, subseq, 0);

    return 0;
}

