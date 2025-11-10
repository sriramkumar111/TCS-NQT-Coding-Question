/* Top k candidate need to be printed from the given Input.
Input format:
here k=3, 4 stands for number of elements
3 4 90 John 85 Bob 92 Alice 110 Aditya

Output:
Aditya: 110
Alice: 100
John: 90 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
  string input;
  getline(cin,input);
  stringstream ss(input);
  vector<string>arr;
   string temp;
  while(ss>>temp)
  {
      arr.push_back(temp);
   }
   int k=stoi(arr[0]);
   int n=stoi(arr[0]);

   vector<pair<int,string>>ans;

   for(int i=2;i<arr.size();i+=2)
   {
        int marks = stoi(arr[i]);
        string name = arr[i+1];
        ans.push_back({marks,name});
   }
   sort(ans.begin(),ans.end(),greater<pair<int,string>>());
   for(int i=0;i<k && i<ans.size();i++)
   {
     cout<<ans[i].second <<":"<<ans[i].first<<endl;
   }
  return 0;
}
