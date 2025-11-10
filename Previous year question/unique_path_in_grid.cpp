#include<iostream>
#include<vector>
using namespace std;
//recursion
//int unique_path(int m,int n)
//{
//    //base case
//    if(m==0 && n==0)  return 1;
//    if(m<0 || n<0)  return 0;
//
//    int up = unique_path(m-1,n);
//    int left = unique_path(m,n-1);
//   
//    return up+left;
//}
// memoization (optimsed approach)
int unique_path(int m,int n,vector<vector<int>>&dp)
{
    //base case
    if(m==0 && n==0)  return 1;
    if(m<0 || n<0)  return 0;
    if(dp[m][n] !=-1) return dp[m][n];
    int up = unique_path(m-1,n,dp);
    int left = unique_path(m,n-1,dp);
   
    return dp[m][n]=up+left;
}

int main()
{
 
   int r,c;
   cin>>r>>c;
   vector<vector<int>>dp(r,vector<int>(c,-1));

   cout<<"Number of unique paths are "<<unique_path(r-1,c-1,dp);

   return 0;
}
