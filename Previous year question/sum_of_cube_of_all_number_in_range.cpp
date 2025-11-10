#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   int m,n;
   cin>>m>>n;
   int sum=0;
   for(int i=m;i<=n;i++)
   {
      sum +=pow(i,3);
   }
   cout<<"Sum of cube of all number in range"<<m<<" and "<<n<<" is "<<sum;

   return 0;
}
