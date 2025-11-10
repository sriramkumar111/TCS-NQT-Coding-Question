#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   vector<int>arr;

   while(cin>>n)
   {
       arr.push_back(n);
    }
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    vector<string>result;

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]%2==0)
        {
            result.push_back("even");
         }
         else{
               result.push_back("odd");
            }
     }
     cout<<"[";
     bool first=true;
     for(auto & it:result)
     {
          if(!first) cout<<",";
          
          cout<<"\""<<it<<"\"";
           
          first = false;
     }
     cout<<"]";
    return 0;
}   
