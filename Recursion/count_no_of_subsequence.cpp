#include<iostream>
#include<vector>
using namespace std;

int  printSubk(int ind,vector<int>&arr,int k,int sum)
{

    //condition not satisfied
    // strtictly done if array contains positive only
    if(sum>k) return 0;

    // if conditon is satisfied return true
    if(ind>=arr.size())
    {
        if(sum==k)
        {
           return 1;
        }
        // if conditons is not satisfied 
        else
          return 0;
     }
     //take
     
     sum +=arr[ind];
     int l=printSubk(ind+1,arr,k,sum);
     
     //not take
     sum -=arr[ind];
     int r= printSubk(ind+1,arr,k,sum);
     
      return l+r;
 
}

int main()
{
   int n;
   vector<int>arr;
   while(cin>>n){
     arr.push_back(n);
   }
   int k=2;
   cout<<printSubk(0,arr,k,0);
 
   return 0;
}
