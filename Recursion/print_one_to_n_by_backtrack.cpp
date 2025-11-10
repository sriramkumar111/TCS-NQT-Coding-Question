#include<iostream>
using namespace std;
//printing 1 to n by backtracking
//void f(int i,int n)
//{
//    if(i<=0) return;
//
//    f(i-1,n);
//    cout<<i<<" ";
//  
//}
//printing n to 1 by backtracking
void f(int i,int n)
{
    if(i>n) return;

    f(i+1,n);
    cout<<i<<" ";
  
}
int main()
{
   int n;
   cin>>n;
   f(1,n);

   return 0;
}
