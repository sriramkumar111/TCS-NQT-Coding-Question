#include<bits/stdc++.h>
using namespace std;

void add_at_pos(vector<int>&arr,int n,int val,int pos)
{
   arr.resize(n+1);
   for(int i=0;i<pos;i++)
   {
    
   }
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
  int val,pos;
  cin>>val;
  cin>>pos;
   arr.insert(arr.begin()+pos,val);
  //add_at_pos(arr,n,val,pos);
  for(int num:arr)
  {
      cout<<num<<" ";
  }
  return 0;
}

