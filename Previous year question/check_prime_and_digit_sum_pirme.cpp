/*Write a program that accepts two integers, n and m
and prints all prime numbers between n and m (inclusive) such that the sum 
of their digits is also a prime number.

Example 1:
Input: 20 25
Output: 23  */

#include<bits/stdc++.h>
using namespace std;

bool check_prime(int num)
{
    if (num < 2) return false;
    if (num == 2 || num == 3) return true;  // Directly handle small primes
    if (num % 2 == 0) return false;        // Eliminate even numbers

    int limit = sqrt(num);
    for (int i = 3; i <= limit; i += 2) // Check odd numbers only
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool check_sum_prime(int num)
{
    int sum=0;

    while(num>0)
    {
         int r=num%10;
         sum+=r;
         num/=10;
    }
     return check_prime(sum);
}
int main()
{
   int n,m;
   cin>>n>>m;
   for(int i=n;i<=m;i++)
   {
      if(check_prime(i) && check_sum_prime(i))
      {
          cout<<i<<endl;
       }
   }
   return 0;
}
