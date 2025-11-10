#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
   if(n<=1) return false;
   
   for(int i=2;i<=sqrt(n);i++)
   {
      if(n%i==0)
      {
         return false;
      }
     
   }
   return true;

}

//check if a number can be expressed as sum of prime
bool check_no(int n)
{
  if(is_prime(n) && is_prime(n-2))
  {
     return true;
  }
  return false;
}
int main()
{

  int n;
  cin>>n;
 
 cout<<(check_no(n)?"yes":"no");
  return 0;
}
