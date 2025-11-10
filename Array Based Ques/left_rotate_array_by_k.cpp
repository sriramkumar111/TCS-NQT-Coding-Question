#include <bits/stdc++.h>
using namespace std;

vector<int> left_rotate(vector<int> arr, int k) {
    int n = arr.size();
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        ans[i] = arr[(i + k ) % n]; //left rotation
       // ans[(i + k) % n] = arr[i];  // Right rotation formula 
    }
    return ans;
}

int main() {
    string input;
    getline(cin, input);
    stringstream ss(input);
    int temp;
    vector<int> arr;
    while (ss >> temp) {
        arr.push_back(temp);
    }

    cout << "Enter k " << endl;
    int k;
    cin >> k;

    vector<int> ans = left_rotate(arr, k);
    
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

