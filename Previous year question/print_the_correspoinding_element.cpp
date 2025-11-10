/*given size of n and list of array elements and we should print if the
given element in array is divisible by 3 then replace the element with
"Three" and if the element in array is divisible by 5 then replace the
element with "Five" if the element divisible by 3 and 5 both then replace
the element with "ThreeFive" if the element in the array is not satisfying 
the above 3 conditions then put the element as it is and print the array.  
 (8th may shift-1)
Example 1
Input:
N=4
[2 3 4 5]
Output: 2 Three 4 Five

Example 2:
Input:
N=2
[15 3]
Output: ThreeFive Three */


#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++)
  {
     cin>>arr[i];
  }
  vector<string>ans;
  for(int i=0;i<n;i++)
  {
       if(arr[i]%3==0 && arr[i]%5==0)
       {
          ans.push_back("ThreeFive");
        }
       else if(arr[i]%3==0)
       {
            ans.push_back("Three");
       }
       else if(arr[i]%5==0)
       {
             ans.push_back("five");
       }
       else
       {
          ans.push_back(to_string(arr[i]));
       }
  }

   for(string s:ans)
   {
      cout<<s<<" ";
   }
  return 0;
}
