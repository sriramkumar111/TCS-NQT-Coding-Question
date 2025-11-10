#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

void solve(vector<int>& arr) {
    unordered_map<int, int> store;
    
    // Count frequency of each element
    for (int num : arr) {
        store[num]++;
    }

    // Store the elements with their frequencies
    vector<pair<int, int>> ans;
    for (auto& it : store) {
        ans.push_back(make_pair(it.first, it.second));
    }

    // Sort the elements based on frequency in descending order
    sort(ans.begin(), ans.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    });

    // Print sorted elements
    cout << "Sorted by frequency:" << endl;
    for (auto& p : ans) {
        cout << p.first << ": " << p.second << endl;
    }
}

int main() {
    vector<int> arr = {1, 1, 2, 2, 2, 3, 3, 3, 3, 4, 5, 5, 5, 0};
    solve(arr);
    return 0;
}

