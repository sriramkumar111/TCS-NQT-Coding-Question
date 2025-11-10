#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
  int fact=1;
  if(n<2) return n;

  for(int i=1;i<=n;i++)
  {
     fact *=i;
   }
   return fact;
}
int main()
{

  int n,r;
  cin>>n>>r;
  cout<<fact(n)/fact(n-r);

  return 0;
}
