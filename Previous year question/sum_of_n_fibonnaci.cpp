#include<iostream>
using namespace std;

int sum_fib(int n)
{
   if(n<=1) return 0;
   int prev=0,prev2=1;
   int sum =1;
   for(int i=2;i<n;i++)
   {
      int curr = prev2+prev;
      sum +=curr;
      prev=prev2;
      prev2=curr;
   }
   return sum;

}
int main()
{
   int n;
   cin>>n;
   cout<<sum_fib(n);

   return 0;
}
