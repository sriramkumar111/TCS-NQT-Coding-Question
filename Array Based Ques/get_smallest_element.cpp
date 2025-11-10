#include<bits/stdc++.h>
using namespace std;

int get_smallest(vector<int>arr)
{
    int smallest=INT_MAX;

    for(int i=0;i<arr.size();i++)
    {
        smallest=min(smallest,arr[i]);
    }
     return smallest;

}
int get_second_largest(vector<int>arr)
{
      if (arr.size() < 2) return -1; // If array has less than 2 elements, return -1 (invalid case)

    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int num : arr) {
        if (num > largest) {
            secondLargest = largest; // Update second largest before changing largest
            largest = num;
        } else if (num > secondLargest && num < largest) {
            secondLargest = num;
        }
    }

    return (secondLargest == INT_MIN) ? -1 : secondLargest; // Return -1 if no second largest element exists
  
}
int get_second_smallest(vector<int>arr)
{
   if(arr.size()<2) return -1;
   int ss=INT_MAX,smallest=INT_MAX;
   
   for(int num:arr)
   {
       if(num<smallest)
       {
         ss=smallest;
         smallest=num; 
       }
       else if(num>smallest && num<ss) 
       {
         ss=num;
       }
   }
  return ss;
}
int main()
{
    vector<int>arr;
    int temp;
    while(cin>>temp)
    {
       arr.push_back(temp);
    }

    //cout<<get_smallest(arr);
   // cout<<get_second_largest(arr);
    cout<<get_second_smallest(arr);
   
    return 0;
}
