#include <iostream>
#include <vector>
using namespace std;

void printAllSubarrays(vector<int>& arr) {
    int n = arr.size();
    
    // Iterate over all possible starting points
    for (int i = 0; i < n; i++) {
        // Iterate over all possible ending points
        for (int j = i; j < n; j++) {
            // Print the subarray from index i to j
            for (int k = i; k <= j; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;  // Move to next line for next subarray
        }
    }
}
//O(N^2)
void printAllSubarrays(vector<int>& arr) {
    int n = arr.size();
    
    // Iterate over all possible starting points
    for (int i = 0; i < n; i++) {
        string subarray = ""; // Store elements in a string
        // Iterate over all possible ending points
        for (int j = i; j < n; j++) {
            subarray += to_string(arr[j]) + " "; // Append element dynamically
            cout << subarray << endl; // Print the current subarray
        }
    }
}
void printAllSubarrays(vector<int>& arr) {
    int n = arr.size();

    // Iterate over all possible starting points
    for (int i = 0; i < n; i++) {
        // Directly print subarray elements instead of using string concatenation
        for (int j = i; j < n; j++) {
            cout << arr[j] << " ";  // Print element directly
            cout << endl;  // Move to the next line after printing the subarray
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 3};
    printAllSubarrays(arr);
    return 0;
}

