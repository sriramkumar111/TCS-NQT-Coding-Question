#include<bits/stdc++.h>
using namespace std;

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
   
   map<int,int>mp;
   for(int num:arr)
   {
       mp[num]++;
   }
   
   for(auto & it:mp)
   {
       if(it.second>=2)
       { 
           cout<<it.first<<" ";
       }
    }
  return 0;
}
