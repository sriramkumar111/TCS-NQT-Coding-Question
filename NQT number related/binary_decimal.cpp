#include<iostream>
#include<math.h>
using namespace std;

int main()
{
   int n;
   cin>>n;

   int dec=0;
   int i=0;
   while(n>0)
   {
      int d= n%10;
      dec += pow(2,i)*d;
      n/=10;
      i++;
    }
    cout<<dec;
  return 0;
}
