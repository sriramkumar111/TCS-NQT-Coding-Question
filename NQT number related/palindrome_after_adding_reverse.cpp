#include<iostream>
#include<cmath>
using namespace std;
bool check_palindrome(int num)
{
   int rev=0;
   int temp=num;
   while(num>0)
   {
      int r=num%10;
      rev = rev*10+r;
      num /=10;
   }
    if(temp== rev) return true;
     return false;
  
}
int main()
{
   int n;
   cin>>n;
   
   int sum=0;
   sum +=n;
   int rev=0;
   while(n>0)
   {
      int r= n%10;
      rev = rev*10+r;
      n/=10;
   }
   sum +=rev;
   if(check_palindrome(sum))
   { 
       cout<<sum<<" is palindrome ";
   }
   else
   {
          cout<<sum<<" is not palindrome ";
    }

   return 0;
}   
