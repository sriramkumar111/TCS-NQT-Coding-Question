#include <iostream>
#include <vector>
using namespace std;

void findRooms(int N, int K, vector<int>& coins) {
    int left = 0, right = 0, sum = 0;
    
    while (right < N) {
        sum += coins[right]; // Expand window
        
        // Shrink window if sum exceeds K
        while (sum > K && left <= right) {
            sum -= coins[left];
            left++;
        }

        // If the sum equals K, print the solution
        if (sum == K) {
            cout << left + 1 << " " << right + 1 << endl; // Convert 0-based index to 1-based
            return; // As we need only the first valid (smallest start index) solution
        }
        
        right++;
    }
}

int main() {
    int N, K;
    cin >> N >> K; // Read input for number of rooms and required sum
    vector<int> coins(N);
    
    for (int i = 0; i < N; i++) {
        cin >> coins[i]; // Read coin values for each room
    }

    findRooms(N, K, coins);
    
    return 0;
}
//Question 1
//This vacation you went to visit the golden house. There are N rooms in this golden house and its owner needs someone to take care of the management of this house. As you have been unemployed for a long time, you are interested in this job. Owner of this house wanted an intelligent manager for this role, so he created one puzzle within that golden house. The person who will be able to solve that puzzle will be the manager of the golden house.
//Owner of the house kept some numbers of golden coins in each room. You have to choose two rooms, one from where you will enter and other one from where you will exit. From any room either you can exit, or you can move to the next room. While visiting any room you will collect all the gold coins, and if you enter any room then you can't skip collecting gold coins from that room, you have to take those coins. Owner wants to have exactly K coins, when you exit the room, he guarantees that there will be at least one possible solution for this puzzle.
//Given number of rooms (N), and number of gold coins in N rooms. You have to find room numbers from where you will start and from where you will exit. If there are more than one solution possible, then you have to provide a solution with a smaller starting room number.
//You can assume that room numbers will start from 1 and end at N.
//Hint: Find a continuous subsequence whose sum will be exactly equal to K.
//Example 1:
//"	Input:
//10 15 -> N =10, K = 15
//5 3 7 14 18 1 18 4 8 3 -> Number of gold coins in each room.
//"	Output:
//1 3
//Explanation: There are ten rooms in the house. You want to have the Total sum of
// gold coins in continuous sequence of room to be 15 There are two solutions from 
//this i.e. [1, 3] and [8, 10] then the solution with a smaller starting room number
// will be printed hence [1, 3] is output.
//

/*
#include<bits/stdc++.h>
using namespace std;

void find_subsequence(vector<int>&arr,int n,int k)
{
   for(int i=1;i<n;i++)
   {
      int sum=0;
      for(int j=i;j<n;j++)
      {
         sum+=arr[j];
         if(sum==k)
         {
            cout<<i<< " "<<j;
            break;
         }
      }
   }


}
int main()
{
  int n,k;
  cin>>n>>k;
  vector<int>arr(n+1);
  for(int i=1;i<n;i++)
  {
     cin>>arr[i];
  }
  find_subsequence(arr,n,k);

  return 0;
} */

