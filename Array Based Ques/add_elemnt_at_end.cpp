#include<bits/stdc++.h>
using namespace std;

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

  //arr.push_back(val);
   //other approach
   arr.insert(arr.end(),val);
  for(int num:arr)
  {
      cout<<num<<" ";
  }
  return 0;
}

