#include<bits/stdc++.h>
using namespace std;

int main()
{
  string input;
  getline(cin,input);
  stringstream ss(input);
  string str;
  int sum=0;
  int num;
  vector<int>ans;
 
  while(ss>>str)
  {
    if(stringstream(str)>>num)
    {
       sum+=num;
       ans.push_back(num);
    }
  }
  cout<<sum;
  double average = (double)sum/ans.size();
  cout<<"Average"<<fixed<<setprecision(2)<<average;
  return 0;
}
