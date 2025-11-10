#include<iostream>
using namespace std;
//parameterized recursion
//void f(int n,int sum)
//{
//    if(n<0){
//        cout<<sum<<endl;
//        return;
//     }
//     f(n-1,sum+n);
//} 
//functional recursion
int f(int n)
{
    if(n==0)
    {
        return 0;
     }
    return  n+f(n-1);
} 
int main()
{
   int n;
   cin>>n;
   cout<< f(n);

   return 0;
}
