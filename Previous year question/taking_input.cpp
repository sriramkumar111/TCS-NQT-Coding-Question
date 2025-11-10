#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector<int> input_array_format() {
    string inp;
    vector<int> arr;
    getline(cin, inp);
    stringstream ss(inp);
    char c;
    
    while (ss >> c)  
    {
        if (c != '[' && c != ',' && c != ']')  // Corrected condition
        {
            ss.unget(); // The unget() function moves the stringstream cursor back by one step.
            int num;
            ss >> num;
            arr.push_back(num);
        }
    }
    return arr;
}

vector<int> input_space_separated() {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }
    return arr;
}

vector<int> input_comma_separated() {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int num;
    char c;
    //one way
      while (ss >> num) {
        arr.push_back(num);
        if (ss.peek() == ',')  // Check if next character is a comma
            ss.ignore();       // Skip the comma
    }
//    while (ss >> num) {
//        arr.push_back(num);
//        ss >> c;  // Skip the comma
//    }
//ss >> num extracts an integer from the stringstream.
//ss >> c tries to extract the next character.
//If the next character is a comma (,), it will be extracted into c,
//removing it from the stream.

    return arr;
}

vector<int> input_array_size_not_given() {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }
    return arr;
}

int main() {
    // Case 1: [1,2,3,4,5]
    vector<int> arr1 = input_array_format();
    cout << "Case 1: [1,2,3,4,5]" << endl;
    for (int num : arr1) {
        cout << num << " ";
    }
    cout << endl;

    // Case 2: 1 2 3 4 5
    vector<int> arr2 = input_space_separated();
    cout << "Case 2: 1 2 3 4 5" << endl;
    for (int num : arr2) {
        cout << num << " ";
    }
    cout << endl;

    // Case 3: 1,2,3,4,5
    vector<int> arr3 = input_comma_separated();
    cout << "Case 3: 1,2,3,4,5" << endl;
    for (int num : arr3) {
        cout << num << " ";
    }
    cout << endl;

    // Case with size not given
    vector<int> arr4 = input_array_size_not_given();
    cout << "Case with size not given" << endl;
    for (int num : arr4) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}



