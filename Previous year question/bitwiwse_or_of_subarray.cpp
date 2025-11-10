#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int bitwise_or_sum(vector<int>arr)
{
   
   int n= arr.size();
         unordered_set<int> allORs, curr, next;
        
        for (int num : arr) {
            next = {num};  // Start with the current element
            for (int val : curr) {
                next.insert(val | num);  // Extend previous ORs
            }
            curr = next;  // Update the current ORs set
            allORs.insert(curr.begin(), curr.end());  // Store all results
        }
        return allORs.size();

}
int main()
{
   int n;
   cin>>n;
   vector<int>arr;
   for(int i=0;i<n;i++)
   {
      int x;
      cin>>x;
      arr.push_back(x);
   }
   cout<<bitwise_or_sum(arr);

   return 0;
}
