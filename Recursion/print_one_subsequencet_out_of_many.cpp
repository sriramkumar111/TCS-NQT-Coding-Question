#include<iostream>
#include<vector>
using namespace std;

bool printSubk(int ind,vector<int>&arr,vector<int>&ds,int k,int sum)
{
    // if conditon is satisfied return true
    if(ind>=arr.size())
    {
        if(sum==k)
        {
           for(int num:ds)
           {
               cout<<num<<" ";
           }
           cout<<endl;
           return true;
        }
        // if conditons is not satisfied return false
        else
          return false;
     }
     //take
     ds.push_back(arr[ind]);
     sum +=arr[ind];
     if(printSubk(ind+1,arr,ds,k,sum) == true)
     {
           return true;
      }
     //not take
     ds.pop_back();
     sum -=arr[ind];
     if(printSubk(ind+1,arr,ds,k,sum)== true)
     {
           return true;
     }
      return false;
 
}

int main()
{
   int n;
   vector<int>arr;
   while(cin>>n){
     arr.push_back(n);
   }

   vector<int>ds;
   int k=2;
   printSubk(0,arr,ds,k,0);
 
   return 0;
}
