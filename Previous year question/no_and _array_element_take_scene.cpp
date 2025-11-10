#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    getline(cin, input); // Take entire line as input
    
    stringstream ss(input);
    int n, sum = 0, num;
    
    ss >> n; // First number is the size of the array

    while (ss >> num) { 
        sum += num; // Sum the array elements
    }

    cout << "Sum: " << sum << endl;
    return 0;
}

//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    string input;
//    getline(cin, input);  // Take entire line as input
//
//    stringstream ss(input);
//    vector<int> arr;
//    int num;
//
//    while (ss >> num) {
//        arr.push_back(num); // Store all numbers
//    }
//
//    int n = arr.back(); // Last number is the size of the array
//    arr.pop_back(); // Remove last element since it's not part of the sum
//
//    if (n > arr.size()) {
//        cout << "Error: Array size exceeds number of elements provided!" << endl;
//        return 1; // Exit with error
//    }
//
//    int sum = accumulate(arr.begin(), arr.begin() + n, 0); // Sum first 'n' elements
//
//    cout << "Sum: " << sum << endl;
//    return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    string input;
//    getline(cin, input);  // Read the entire input line
//
//    vector<int> arr;
//    stringstream ss(input);
//    string token;
//
//    // Parse comma-separated values
//    while (getline(ss, token, ',')) { 
//        arr.push_back(stoi(token));  // Convert token to integer and store in vector
//    }
//
//    int n = arr.back();  // Last number is the size of the array
//    arr.pop_back();  // Remove last element since it's not part of the sum
//
//    if (n > arr.size()) {
//        cout << "Error: Array size exceeds number of elements provided!" << endl;
//        return 1; // Exit with error
//    }
//
//    int sum = accumulate(arr.begin(), arr.begin() + n, 0); // Compute sum of first 'n' elements
//
//    cout << "Sum: " << sum << endl;
//    return 0;
//}


