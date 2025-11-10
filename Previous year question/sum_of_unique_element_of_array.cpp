#include<bits/stdc++.h>
using namespace std;

int sum_of_unique(vector<int>&arr)
{
   int sum =0;
   unordered_map<int,int>frq;
   for(int num:arr)
   {
       frq[num]++;
    }

    for(auto &it:frq)
    {
        if(it.second==1)
        {
            sum+=it.first;
         }
     }
     return sum;

}
int main()
{
  string input;
  getline(cin,input);
  stringstream ss(input);
  vector<int>arr;
  int num;
  while(ss>>num)
  {
     arr.push_back(num);
  }

  cout<<"sum of unique elements is : "<<sum_of_unique(arr);


   return 0;
}
