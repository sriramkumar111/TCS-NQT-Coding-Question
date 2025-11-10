#include<bits/stdc++.h>
using namespace std;

vector<string>easy_method(vector<string>&arr)
{
   unordered_set<string>seen;
   vector<string>ans;

   for(int i=0;i<arr.size();i++)
   {
        if(seen.find(arr[i])==seen.end())
        {
           ans.push_back(arr[i]);
           seen.insert(arr[i]);
        }
   }
  return ans;

}


vector<string>remove_duplicates(vector<string>&arr)
{
    map<string,int>mp;
    for(string s:arr)
    {
         mp[s]++;
     }
     
     vector<string>ans;
     for(auto it=mp.begin(); it!=mp.end();it++)
     {
        if(it->second>1)
        {
           it->second=1;
        }
       
        
     }
    
     for(auto & it:mp)
     {
           ans.push_back(it.first);
          
     }
  return ans;
}
int main()
{
   string input;
   getline(cin,input);
   stringstream ss(input);
   string str;
   vector<string>arr;
   while(ss>>str)
   {
      arr.push_back(str);
   }
//   vector<string>ans=remove_duplicates(arr);
//   sort(ans.begin(),ans.end(),greater<string>());
   vector<string>ans= easy_method(arr);
   sort(ans.begin(),ans.end(),greater<string>());
   for(string str:ans)
   {
          cout<<str<<" ";
    }
}
