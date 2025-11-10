#include<bits/stdc++.h>
using namespace std;

int max_fuel(int n,int k,vector<int>&arr1,vector<int>arr2)
{
   int max_vol=INT_MIN;

   for(int i=0;i<n;i++)
   {
     if(arr2[i]>max_val)
     {
        max_vol=max(max_vol,arr2[i]);
     }
   }  


}
int main()
{
  int n,k;
  cin>>n>>k;
  vector<int>arr1(n);
  vector<int>arr2(n):

  for(int i=0;i<n;i++)
  {
    cin>>arr1[i];
  }
  for(int i=0;i<n;i++)
  {
     cin>>arr2[i];
  }

  cout<<max_fuel(n,k,arr1,arr2);
  return 0;
}


/*Vijay, an industrialist, recently opened a fuel industry. There are N numbers of 
different categories of fuel and each fuel is stored in a fixed site of container. Size of 
the container can vary from fuel to fuel. Hari, a fuel merchant, visited Vijay’s aldustry 
and he wanted to purchase fuels for his shop. Hari has a limited amount of money 
(K) and wants to buy fuel. Hari will not buy more than one container of any fuel 
category. Hari wants to maximize the overall volume i.e., sum of volume of fuels he 
buys. Your task is to get the maximum overall volume of fuels which Hari can 
purchase. 
Given the number of categories of fuels (N), money units (K) price of container of 
each category of fuel and volume contained in container for each category. 
NOTE: Quantity (volume) of container will be given in the same order as volume of 
price. 
Hint: Break problems into parts and get the overall volume for smaller N and smaller 
K. 
Example 1: 
• Input: 
5, 105 -> N = 5, K=105 
10 10 40 50 90 -> price of container of each fuel category. 
10 20 20 50 150 -> volume of container of each fuel Category. 
• Output: 
170 
• Explanation: 
There are 5 fuel categories and Hani has 105 units of $ money. To have maximum fuel 
volume Hari can buy oil at 2nd and 5th position. Total cost= 10 + 90 = 100 and it is less 
than 105(money which Hari has). Total volume = 20 + 150 = 170. It’s the max volume 
Hari can get; no other combination can get more volume than this. 
Example 2: 
• Input: 
5 100 -> N = 5, K=100 
10 20 30 40 100 -> price of container of each fuel category. 
10 20 30 40 100 -> volume of container of each fuel 
• Output: 
100 
Explanation: 
Hari can buy either 1st four categories or only 5th category of fuel. In either case the 

total amount will be 100 and volume will be 100 (which is the maximum volume 
possible).  */
