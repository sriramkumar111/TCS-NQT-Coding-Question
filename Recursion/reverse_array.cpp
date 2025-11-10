#include<iostream>
#include<vector>
using namespace std;
//using two pointer approach and taking two variable
//void reverseArr(vector<int>&arr,int l,int r)
//{
//
//   if(l>=r)
//   {
//        return;
//   }
//    swap(arr[l],arr[r]);
//
//   reverseArr(arr,l+1,r-1);
//} 

//using just single variable

void reverseArr(vector<int>&arr,int i)
{
   int n=arr.size();
   if(i>=n/2)
   {
        return;
   }
    swap(arr[i],arr[n-i-1]);

   reverseArr(arr,i+1);
} 
int main()
{
   int n;
   vector<int>arr;
   while(cin>>n){
    arr.push_back(n);
   }
   
   reverseArr(arr,0);

   for(auto it:arr)
   {
          cout<<it<<" ";
   }

   return 0;
}
