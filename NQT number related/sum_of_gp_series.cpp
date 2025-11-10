#include<bits/stdc++.h>
using namespace std;

float sum_of_gp(float a,float r,int n)
{
   float sum=0.0;
   for(int i=0;i<n;i++)
   {
        sum +=a;
        a =a*r;
   }
   return sum;
}
int main()
{
  float a,r;
  int n;
  cin>>a>>r>>n;
  //cout<<fixed<<setprecision(1)<<sum_of_gp(a,r,n);
  //cout<<ceil(sum_of_gp(a,r,n));

  //using direct formula
  float sum = a*(pow(r,n)-1)/(r-1);
  cout<<sum;
  return 0;
}
