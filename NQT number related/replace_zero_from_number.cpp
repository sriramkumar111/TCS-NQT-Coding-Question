#include<bits/stdc++.h>
using namespace std;

int replace_zero(int n)
{
  int ans=0,temp=1;

  while(n>0)
  {
     int r=n%10;
     if(r==0)
     {
        r=1;
      }

     ans =ans+r*temp;
     n /=10;
     temp =temp*10;
  }
   return ans;
}
int main()
{

  int n;
  cin>>n;
  cout<<replace_zero(n);
  return 0;
}
