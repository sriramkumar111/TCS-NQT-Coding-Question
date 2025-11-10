/*In a company there are employees and their efficiency
is given in array 'arr' (can be negative) you need to 
find the maximum efficiency of 3 employees.
The efficiency of 3 employees will be calculated by multiplying their individual
efficiencies from the given array.

Example 1:
5
3 -2 -8 4 1
O/P: 64
*/

#include<bits/stdc++.h>
using namespace std;

int get_max_eff(vector<int>arr,int n)
{
   int n = arr.size();
    
    if (n < 3) return 0;  // Not enough employees

    // Sort the array
    sort(arr.begin(), arr.end());

    // Case 1: Product of three largest numbers
    int case1 = arr[n-1] * arr[n-2] * arr[n-3];

    // Case 2: Product of two smallest numbers (most negative) and the largest number
    int case2 = arr[0] * arr[1] * arr[n-1];

    return max(case1, case2);
}
/* O(n) time complexity
int get_max_eff(vector<int> &arr) {
    int n = arr.size();
    
    if (n < 3) return 0;  // Not enough employees

    // Initialize top 3 max values and bottom 2 min values
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    // Single pass to find required numbers
    for (int num : arr) {
        // Update max values
        if (num > max1) {
            max3 = max2;
            max2 = max1;
            max1 = num;
        } else if (num > max2) {
            max3 = max2;
            max2 = num;
        } else if (num > max3) {
            max3 = num;
        }

        // Update min values
        if (num < min1) {
            min2 = min1;
            min1 = num;
        } else if (num < min2) {
            min2 = num;
        }
    }

    // Maximum product of three numbers
    return max(max1 * max2 * max3, min1 * min2 * max1);
} */
int main()
{
   int n;
   cin>>n;
   vector<int>arr(n);
   int num;
   for(int i=0;i<n;i++)
   {
        cin>>arr[i];
       
    }
    cout<<get_max_eff(arr,n);
    
   return 0;
}
