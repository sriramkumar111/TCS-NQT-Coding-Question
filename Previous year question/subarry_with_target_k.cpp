#include<bits/stdc++.h>
using namespace std;

//void optimalApproach(vector<int>& arr, int n, int target) {
//    unordered_map<int, int> sumMap;
//    int curSum = 0;
//    for (int i = 0; i < n; i++) {
//        curSum += arr[i];
//        if (curSum == target) {
//            for (int j = 0; j <= i; j++) {
//                cout << arr[j] << " ";
//            }
//            cout << endl;
//        }
//        if (sumMap.find(curSum - target) != sumMap.end()) {
//            int startIndex = sumMap[curSum - target] + 1;
//            for (int k = startIndex; k <= i; k++) {
//                cout << arr[k] << " ";
//            }
//            cout << endl;
//        }
//        sumMap[curSum] = i;
//    }
//}
//time complexity O(n^2)
void print_sub(vector<int>&arr,int s,int e)
{
   for(int k=s;k<e;k++)
   {
         cout<<arr[k]<<" ";
    }
    cout<<endl;
 }

void print_subarray(vector<int>& arr, int k) {
    int n = arr.size();
    unordered_map<int, vector<int>> preSumMap;  // Stores prefix sum and its indices
    int preSum = 0;  

    // Insert a dummy entry for sum 0 at index -1 (handles cases when subarray starts from index 0)
    preSumMap[0].push_back(-1);  

    for (int j = 0; j < n; j++) {
        preSum += arr[j];  

        // Check if (preSum - k) exists in map
        if (preSumMap.find(preSum - k) != preSumMap.end()) {
            for (int start : preSumMap[preSum - k]) {
                print_sub(arr, start + 1, j + 1);  // Printing valid subarray
            }
        }

        // Store the prefix sum and its index
        preSumMap[preSum].push_back(j);
    }
}

//void print_subarray(vector<int>&arr,int k)
//{
//    int n=arr.size();
//    
//    for(int i=0;i<n;i++)
//    {
//        int sum=0;
//       for(int j=i;j<n;j++)
//       {  
//               sum +=arr[j];
//           
//               if(sum==k)
//              {
//                 print_sub(arr,i,j+1);
//                }
//         }
//      }
//
//}

int main()
{
   int n,k;
   vector<int>arr;
   while(cin>>n)
   {
       arr.push_back(n);
    }
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
   
    cin>>k;
    print_subarray(arr,k);

   return 0;
}
