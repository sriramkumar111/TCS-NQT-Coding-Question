#include <bits/stdc++.h>
using namespace std;
//remove duplicate from unsorted array
void duplicate(int arr[], int n) {
    vector<int> mark(n, 1);  // Initialize all elements to 1

    for (int i = 0; i < n; i++) {
        if (mark[i] == 1) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    mark[j] = 0;  // Mark duplicates
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (mark[i] == 1) {
            cout << arr[i] << ",";
        }
    }
}

int main() {
    vector<int> arr;
    int n;
    while (cin >> n) {
        arr.push_back(n);
    }

    vector<int> uniqueElements;
    unordered_set<int> st;

    for (int num : arr) {
        if (st.find(num) == st.end()) {  // If not in set, add to vector
            uniqueElements.push_back(num);
            st.insert(num);
        }
    }

    for (int num : uniqueElements) {
        cout << num << " ";
    }
    return 0;
}


//#include <iostream>
//#include <vector>
//#include <unordered_set>
//
//using namespace std;
//
//void solve(vector<int>& arr, int N) {
//    vector<int> unique;
//    unordered_set<int> seen;
//
//    for (int i = 0; i < N; i++) {
//        if (seen.find(arr[i]) == seen.end()) {
//            unique.push_back(arr[i]);
//            seen.insert(arr[i]);
//        }
//    }
//
//    // Print unique elements
//    cout << "[";
//    for (size_t i = 0; i < unique.size(); i++) {
//        cout << unique[i];
//        if (i < unique.size() - 1) {
//            cout << ", ";
//        }
//    }
//    cout << "]" << endl;
//}
//
//int main() {
//    vector<int> arr = {1, 2, 3, 2, 4, 1, 5}; // Example input
//    int N = arr.size();
//    
//    solve(arr, N);
//    return 0;
//}

