#include<bits/stdc++.h>
using namespace std;
int main()
{
  string input;
  getline(cin,input);
  
  input.erase(remove(input.begin(),input.end(),'['),input.end());
  input.erase(remove(input.begin(),input.end(),']'),input.end());
  input.erase(remove(input.begin(),input.end(),' '),input.end());

  stringstream ss(input);
  string num;
  vector<int>arr;
  while(getline(ss,num,','))
  {
    arr.push_back(stoi(num));
  }
  
  for(auto & it:arr)
  {
       cout<<it<<" ";
  }
  

   return 0;
}
