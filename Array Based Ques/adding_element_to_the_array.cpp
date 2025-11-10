#include<bits/stdc++.h>
using namespace std;
void add_at_begin(vector<int>&arr,int n,int val)
{
    arr.resize(n+1);
    for(int i=n-1;i>=0;i--)
    {
         arr[i+1]=arr[i];
        
     }
     arr[0]=val;
}
int main()
{
  int n;
  cin>>n;
  vector<int>arr(n) ;
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  int val;
   cin>>val;
  //add_at_begin(arr,n,val);
  //other approach
  arr.insert(arr.begin(),val);
  for(int num:arr)
  {
      cout<<num<<" ";
  }
  return 0;
}

