#include<bits/stdc++.h>
using namespace std;

void rev(vector<int>&arr)
{
   int l=0,r=arr.size()-1;
   while(l<=r)
   {
      swap(arr[l],arr[r]);
      l++;
      r--;
    }
}
int main()
{
    string input;
    getline(cin,input);
    stringstream ss(input);
    int temp;
    vector<int>arr;
    while(ss>>temp)
    {
       arr.push_back(temp);
    }
    //reverse(arr.begin(),arr.end());
    rev(arr);
    for(int num:arr)
   {
      cout<<num<<" ";
   }
   
    return 0;
}
