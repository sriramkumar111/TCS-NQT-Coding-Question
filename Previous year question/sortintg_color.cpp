/*Given an array nums with n objects colored red, white, or blue, 
sort them in-place so that objects of the same color are adjacent,
with the colors in the order red, white, and blue.

We will use the integers 3, 6 and 7 to represent the color red, white, 
and blue, respectively.
You must solve this problem without using the library's sort function.

Example 1:
Input: nums = [3,6,3,7,6,3,7] 
Output: 3 3 3 6 6 7 7

 */

#include<bits/stdc++.h>
using namespace std;

//bubblel sort (O(n^2))
void sort_color(vector<int> &num)
{
   int n=num.size();
   
   for(int i=0;i<n-1;i++)
   {
       for(int j=0;j<n-i-1;j++)
       {
          if(num[j]>num[j+1])
          {
            swap(num[j],num[j+1]);
          }
       }
   }

}

//optimise approach using dutch national flag algo

void dutch(vector<int>&nums)
{
   int n=nums.size();
   int low=0,high=n-1,mid=0;

   while(mid<=high)
   {
      if(nums[mid]==3)
      {
        swap(nums[low],nums[mid]);
        low++;
        mid++;
      }
      else if(nums[mid]==6)
      {
         mid++;
      }
      else
      {
           swap(nums[high],nums[mid]);
           high--;
           
       }

    }

}

int main()
{
//  string input;
//  getline(cin,input);
//  stringstream ss(input);
//  string num;
//  vector<int>arr;
//
//  while(getline(ss,num,','))
//  {
//     arr.push_back(stoi(num));
//  }

  //input case 2
  string input;
  getline(cin,input);
  stringstream ss(input);
  
  vector<int>arr;
  char c;

  while(ss>>c)
  {
     if(c!='[' && c!=',' &&c!=']')
     {
          ss.unget();
          int num;
          ss>>num;
          arr.push_back(num);
     }
  }

 // sort_color(arr);
  dutch(arr);
  for(int n:arr)
  { 
     cout<<n<<" ";
   }
  return 0;
}


// other way to take input
//string input;
//    getline(cin, input);  // Read the entire line
//    
//    // Remove '[' and ']'
//    input.erase(remove(input.begin(), input.end(), '['), input.end());
//    input.erase(remove(input.begin(), input.end(), ']'), input.end());
//
//    stringstream ss(input);
//    vector<int> arr;
//    int num;
//    char comma;
//
//    while (ss >> num) {  
//        arr.push_back(num);
//        ss >> comma; // Consume the comma (if present)
//    }

