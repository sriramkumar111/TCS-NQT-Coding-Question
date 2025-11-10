#include<iostream>
using namespace std;
//void f(int i,int n)
//{
//    if(i>n) return;
//
//    cout<<i<<" ";
//    f(i-1,n);
//  
//}
// n to 1 print
void f(int i,int n)
{
    if(i<=0) return;

    cout<<i<<" ";
    f(i-1,n);
  
}
int main()
{
   int n;
   cin>>n;
   f(n,n);

   return 0;
}
