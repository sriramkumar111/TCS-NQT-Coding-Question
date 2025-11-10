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

   vector<int>arr;
   for(int i=2;i<=n;i++)
   {
        if(n%i==0 && check_prime(i))
        {
            arr.push_back(i);
        }
    }

   cout<<"prime factors of "<<n <<" are ";
   cout<<"[";
   bool first = true;
   for(int n:arr)
   {
       if(!first) cout<<",";
       cout<<n;
       first= false;
    }
    cout<<"]"<<endl;
  
   
   return 0;
}   
