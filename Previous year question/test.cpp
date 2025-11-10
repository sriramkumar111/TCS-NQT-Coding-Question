#include<bits/stdc++.h>
using namespace std;

int main()
{

  string input;
  getline(cin,input);
  stringstream ss(input);
  string num;
  vector<string>arr;
  while(ss>>num)
  {
     arr.push_back(num);
  }
  

  for(auto &it:arr)
  {
     cout<<it<<" ";
  }


   return 0;
}
