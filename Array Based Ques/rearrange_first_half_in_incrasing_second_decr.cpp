//general concept    sort(arr.begin(),arr.begin()+(n/2));
 //                   sort(arr.begin()+(n/2),arr.end(),greater<int>());

#include<bits/stdc++.h>
using namespace std;

vector<int> sort_half(vector<int>arr)
{
   int n=arr.size();
   sort(arr.begin(),arr.end());
   vector<int>ans;
   for(int i=0;i<n/2;i++)
   {
        ans.push_back(arr[i]);
    }
    for(int i=n-1;i>=n/2;i--)
   {
       ans.push_back(arr[i]);
    }
   return ans;

}
int main()
{
    string input;
    getline(cin,input);
    stringstream ss(input);
    int temp;
    vector<int>arr;
    while(ss>>temp)
    {
       arr.push_back(temp);
    }
    vector<int>ans= sort_half(arr);
    for(int num:ans)
   {
      cout<<num<<" ";
   }
   
    return 0;
}
