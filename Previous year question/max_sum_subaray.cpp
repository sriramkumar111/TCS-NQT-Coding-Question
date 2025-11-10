#include<bits/stdc++.h>
using namespace std;

int method_2(vector<int>arr)
{
   int max_sum=INT_MIN,curr_sum=0;

   for(int num:arr)
   {
        curr_sum+=num;
        if(curr_sum>max_sum)
        {
           max_sum=max(max_sum,curr_sum);
        }
        if(curr_sum<0)
        {
           curr_sum=0;
        }
   }
   return max_sum;

}
int get_max_sum_subarray(vector<int>num)
{
   int max_sum=INT_MIN,curr_sum=0;

   for(int i:num)
   {
      curr_sum = max(i,curr_sum+i);
      max_sum= max(max_sum,curr_sum);

    }
    return max_sum;
}
int main()
{
  string input;
  getline(cin,input);
  vector<int>arr;
  stringstream ss(input);
  int num;
  while(ss>>num)
  {
         arr.push_back(num);
   }
 // cout<<get_max_sum_subarray(arr);
    cout<<method_2(arr);
  
   return 0;
}
