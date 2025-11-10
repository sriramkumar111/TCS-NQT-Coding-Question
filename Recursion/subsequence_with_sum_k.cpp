#include<iostream>
#include<vector>
using namespace std;

void printSubk(int ind,vector<int>&arr,vector<int>&ds,int k,int sum)
{
    if(ind>=arr.size())
    {
        if(sum==k)
        {
           for(int num:ds)
           {
               cout<<num<<" ";
           }
           cout<<endl;
        }
        
        return ;
     }
     //take
     ds.push_back(arr[ind]);
     sum +=arr[ind];
     printSubk(ind+1,arr,ds,k,sum);
     //not take
     ds.pop_back();
     sum -=arr[ind];
     printSubk(ind+1,arr,ds,k,sum);
 
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
