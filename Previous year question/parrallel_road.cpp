#include<bits/stdc++.h>
using namespace std;

void find_median(vector<int>&arr)
{
   int n=arr.size();
   sort(arr.begin(),arr.end());
   double mode=0.0;
   if(n%2==0)
   {
      mode +=arr[n/2]+arr[(n/2)-1];
       cout<< mode/2;
   }
   else
   {
       cout<<arr[n/2];
    }
   
}
int main()
{
  int n1,n2;
  cin>>n1>>n2;
  vector<int>arr1(n1);
  vector<int>arr2(n2);

  for(int i=0;i<n1;i++)
  {
     cin>>arr1[i];
  }
  for(int j=0;j<n2;j++)
  {
     cin>>arr2[j];
  }
  set<int>ue;
  for(int i=0;i<n1;i++)
  {
       ue.insert(arr1[i]);
  }
  for(int i=0;i<n2;i++)
  {
       ue.insert(arr2[i]);
  }
  
  vector<int>res;
  for(int i:ue)
  {
         res.push_back(i);
   }

  find_median(res);

  return 0;
}
