#include<iostream>
#include<vector>
using namespace std;

void printSub(int ind,vector<int>&arr,vector<int>&ds)
{
    if(ind>=arr.size())
    {
        for(int num:ds)
        {
           cout<<num<<" " ;
        }
        if(ds.size()==0)
        {
            cout<<"{ }";
        }
        cout<<endl;
        return ;
     }
     //take
     ds.push_back(arr[ind]);
     printSub(ind+1,arr,ds);
     //not take
     ds.pop_back();
     printSub(ind+1,arr,ds);
 
}

int main()
{
   int n;
   vector<int>arr;
   while(cin>>n){
     arr.push_back(n);
   }

   vector<int>ds;
   printSub(0,arr,ds);
 
   return 0;
}
