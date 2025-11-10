#include <bits/stdc++.h>
using namespace std;
//remove duplicate from sorted array
int removeDuplicates(int arr[], int n)
{
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}
int main() {
    vector<int> arr;
    int n;
    while (cin >> n) {
        arr.push_back(n);
    }
    set<int>st;
    vector<int>ans;

    for(int i=0;i<arr.size();i++)
    {
      if(st.find(arr[i])==st.end())
      {
          st.insert(arr[i]);
          ans.push_back(arr[i]);
      }
    }
    for(int num:ans)
    {
        cout<<num<<" ";
    }
    return 0;
}

//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    vector<int> arr;
//    int n;
//
//    // Take input until EOF (Ctrl+D on Linux/macOS, Ctrl+Z on Windows)
//    while (cin >> n) {
//        arr.push_back(n);
//    }
//
//    if (arr.empty()) return 0;  // Handle empty input case
//
//    // Two-pointer approach to remove duplicates in-place
//    int index = 0;
//    for (int i = 1; i < arr.size(); i++) {
//        if (arr[i] != arr[index]) {
//            arr[++index] = arr[i];
//        }
//    }
//
//    // Print unique elements
//    for (int i = 0; i <= index; i++) {
//        cout << arr[i] << " ";
//    }
//
//    return 0;
//}

//Alternative: Using unique() in C++
//If modifying the vector in-place is allowed, std::unique() can simplify this:
//
//cpp
//Copy
//Edit
//arr.erase(unique(arr.begin(), arr.end()), arr.end());
//for (int num : arr) cout << num << " ";
//This works because unique() shifts duplicates to the end, and erase() removes them.

