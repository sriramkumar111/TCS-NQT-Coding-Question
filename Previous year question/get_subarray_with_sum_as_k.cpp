#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>>get_subarray_with_k(vector<int>&arr,int k)
{
    vector<pair<int,int>>ans;
    int n=arr.size();
   

    for(int i=0;i<n;i++)
    {
         int sum =0;
         for(int j=i;j<n;j++)
         {
             sum+=arr[j];
             if(sum==k)
             {
                 ans.push_back({i+1,j+1});
                 return ans;
             }
          }
    }
   return ans;


}
int main()
{
   int n,k;
   cin>>n>>k;
   vector<int>arr(n);
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
    }
    vector<pair<int,int>>ans=get_subarray_with_k(arr,k);
    if(!ans.empty())
    {
           cout<<ans[0].first<< " "<<ans[0].second;
    }
    else
    {
      cout<<"-1"<<endl;
    }
   
   return 0;
}







//10 15 -> N =10, K = 15
//5 3 7 14 18 1 18 4 8 3 -> Number of gold coins in each room.
//Output:
//1 3
//Explanation: There are ten rooms in the house. You want to have the Total sum of gold coins 
//in continuous sequence of room to be 15 There are two solutions from this i.e. [1, 3] 
//and [8, 10] then the solution
//with a smaller starting room number will be printed hence [1, 3] is output.
