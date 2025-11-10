#include<iostream>
using namespace std;
void f(int i,int n)
{
    if(i>=n) return;

    cout<<"Ram"<<" ";
    f(i+1,n);
  
}
int main()
{
   int n;
   cin>>n;
   f(0,n);

   return 0;
}
