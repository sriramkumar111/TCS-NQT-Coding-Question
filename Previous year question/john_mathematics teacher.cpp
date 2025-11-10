#include <iostream>
#include <vector>
using namespace std;

int fun(vector<int>& arr, int x, int y, int n) {
    arr[x - 1] = y; // Update the value at index x-1
    int ans = 1;
    
    // Count unique adjacent elements
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            ans++;
        }
    }
    
    return ans;
}

// Function to compute merit list after removing adjacent duplicates
int getMeritListSize(vector<int>& marks) {
    vector<int> meritList;
    meritList.push_back(marks[0]); // Add first student

    for (int i = 1; i < marks.size(); i++) {
        if (marks[i] != meritList.back()) {
            meritList.push_back(marks[i]);
        }
    }
    return meritList.size();
}

int main() {
    int N, K;
    cin >> N >> K;  // Read N (students) and K (re-evaluations)

    vector<int> marks(N);
    for (int i = 0; i < N; i++) {
        cin >> marks[i];  // Read initial marks
    }

    while (K--) {
        int X, Y;
        cin >> X >> Y;  // Read re-evaluation input
        marks[X - 1] = Y;  // Update mark (1-based index to 0-based)

        // Compute the new merit list size and print
        cout << getMeritListSize(marks) << endl;
    }

    return 0;
}

