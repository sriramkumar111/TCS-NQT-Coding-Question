#include<bits/stdc++.h>
using namespace std;

int max_prod_optimal(vector<int>nums)
{
   int pre=1,suff=1;
   int ans=INT_MIN;
   int n=nums.size();
   for(int i=0;i<n;i++)
   {
      if(pre==0) pre=1;
      if(suff==0) suff=1;

      pre *=nums[i];
      suff *=nums[n-i-1];  
      ans = max(ans,max(pre,suff));
   }
   return ans;
}


int max_prod(vector<int>num)
{
  int maxi=INT_MIN;
  int n= num.size();
  for(int i=0;i<n;i++)
  {
      int prod=1;
      for(int j=i;j<n;j++)
      {
         prod = prod*num[j];
         if(prod>maxi)
         {
            maxi=prod;
          }
      }
      
  }
  return maxi;
}
int main()
{
  string input;
  getline(cin,input);
  stringstream ss(input);
  int num;
  vector<int>arr;

  while(ss>>num)
  {
      arr.push_back(num);
   }
   
   //cout<<max_prod(arr);
   cout<<max_prod_optimal(arr);
   
  
  return 0;
}
