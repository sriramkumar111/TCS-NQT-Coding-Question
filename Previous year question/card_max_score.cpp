#include<bits/stdc++.h>
using namespace std;
//brute force
int maxScore(vector<int>& cardPoints, int k) {
    int n = cardPoints.size();
    int max_sum = 0;

    // Try taking i cards from the front and (k - i) from the back
    for (int i = 0; i <= k; i++) {
        int sum = 0;

        // Take `i` cards from the front
        for (int j = 0; j < i; j++) {
            sum += cardPoints[j];
        }

        // Take `k - i` cards from the back
        for (int j = 0; j < (k - i); j++) {
            sum += cardPoints[n - 1 - j];
        }

        // Update max sum
        max_sum = max(max_sum, sum);
    }

    return max_sum;
}

//optimise approach (sliding window)
int find_max_score(vector<int>& arr, int n, int k) {
    int total_sum = accumulate(arr.begin(), arr.end(), 0);

    if (k == n) return total_sum;  // If we take all elements

    int window_size = n - k;
    int min_subarray_sum = accumulate(arr.begin(), arr.begin() + window_size, 0);
    int current_sum = min_subarray_sum;

    for (int i = window_size; i < n; i++) {
        current_sum += arr[i] - arr[i - window_size];  // Slide the window
        min_subarray_sum = min(min_subarray_sum, current_sum);
    }

    return total_sum - min_subarray_sum;  // Max sum after removing min window
}
int main()
{
  int n,k;
  
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++)
  {
       cin>>arr[i];
   }
  cin>>k;
  cout<<find_max_score(arr,n,k);
  return 0;
}
