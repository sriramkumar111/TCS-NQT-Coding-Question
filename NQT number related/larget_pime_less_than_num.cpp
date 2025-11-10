#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

bool check_prime(int num)
{
   if(num==1) return false;

  for(int i=2;i<=sqrt(num);i++)
  {
      if(num%i==0)
        return false;
   }
   return true;

}

int main()
{
   int n;
   cin>>n;
   int lp;
   for(int i=2;i<=n;i++)
   {
       if(check_prime(i))
       {
            lp=i;
  
        }
    }
     cout<<"larget prime is "<<lp;
   
   return 0;
}   
