//we are given a list of Numbers we need to return maximum diffrence blw
//Smallest & Largest Number.
//Important note:- smallest number should be before largest number

#include <bits/stdc++.h>
using namespace std;
int get_smallest(vector<int>&arr)
{
   int smallest = INT_MAX;
    
   for(int i=0;i<arr.size();i++)
   {
      if(arr[i]<smallest)
      {
         smallest=arr[i];
      }
   }
   return smallest;
}
int get_largest(vector<int>&arr)
{
   int largest = INT_MIN;
    
   for(int i=0;i<arr.size();i++)
   {
      if(arr[i]>largest)
      {
         largest=arr[i];
      }
   }
   return largest;
}
int main() {
   int n;
   cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
    }
    int smallest=get_smallest(arr);
    int largest=get_largest(arr);
    cout<<largest-smallest;

  return 0;
}

//#include <bits/stdc++.h>
//
//using namespace std;
//
//int solve(vector<string>& arr) {
//    int largest = INT_MIN;
//    int maxDiff = INT_MIN;
//    for (int i = arr.size() - 1; i >= 0; --i) {
//        try {
//            int num = stoi(arr[i]);
//            largest = max(largest, num);
//            maxDiff = max(maxDiff, largest - num);
//        } catch (const std::invalid_argument& e) {
//            // Handle invalid input
//            std::cerr << "Invalid input: " << arr[i] << std::endl;
//        }
//    }
//    return maxDiff;
//}
//
//int solveInt(vector<int>& arr) {
//    int largest = INT_MIN;
//    int maxDiff = INT_MIN;
//    for (int i = arr.size() - 1; i >= 0; --i) {
//        int num = arr[i];
//        largest = max(largest, num);
//        maxDiff = max(maxDiff, largest - num);
//    }
//    return maxDiff;
//}
//
//int main() {
//    // Input array format
//    cout << "Enter elements separated by commas within square brackets like [element1,element2,...]: ";
//    string input;
//    getline(cin, input);
//    input.erase(remove(input.begin(), input.end(), '['), input.end()); // Remove '['
//    input.erase(remove(input.begin(), input.end(), ']'), input.end()); // Remove ']'
//    stringstream ss(input);
//    vector<string> arr1;
//    string element;
//    while (getline(ss, element, ',')) {
//        arr1.push_back(element);
//    }
//    cout << "Case 1 - [-3,-5,1,6,-7,8,11], maxdiff: " << solve(arr1) << endl;
//
//    // Input space separated
//    cout << "Enter elements separated by spaces: ";
//    string spaceSeparatedInput;
//    getline(cin, spaceSeparatedInput);
//    vector<int> arr2;
//    int num;
//    stringstream ss2(spaceSeparatedInput);
//    while (ss2 >> num) {
//        arr2.push_back(num);
//    }
//    cout << "Case 2: -3 -5 1 6 -7 8 11, maxdiff: " << solveInt(arr2) << endl;
//
//    return 0;
//}
