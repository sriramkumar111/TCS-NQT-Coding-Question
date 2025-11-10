#include <iostream>
#include <vector>
using namespace std;

// Recursive function to print all subarrays
void printSubarrays(vector<int>& arr, int start, int end) {
    // Base case: If start index exceeds array size, return
    if (start == arr.size()) return;

    // If end index exceeds array size, move to the next start index
    if (end == arr.size()) {
        printSubarrays(arr, start + 1, start + 1);
        return;
    }

    // Print current subarray
    cout << "[ ";
    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;

    // Recursive call to extend the subarray
    printSubarrays(arr, start, end + 1);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "All Subarrays:\n";
    printSubarrays(arr, 0, 0);

    return 0;
}

