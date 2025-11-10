#include<bits/stdc++.h>
using namespace std;

//bool leap_year(int n)
//{
//  if(n%100==0 && n%400 ==0)
//  {
//      return true;
//   }
//   else if(n %4==0 && n%100!=0)
//   {
//      return true;
//   }
//   return false;
//}

bool leap_year(int n)
{
   if( ((n%4==0) && (n%100!=0)) || n%400==0)
   {
     return true;
   }
   return false;
}
int main()
{
  
  int n;
  cin>>n;
  if(leap_year(n))
  {
      cout<<"Leap year";
  }
  else
  {
     cout<<"not a leap year";
  }
  
  return 0;
}
