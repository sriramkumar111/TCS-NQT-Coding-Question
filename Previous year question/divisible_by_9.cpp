#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int sum=0;
    while(n>0)
    {
        int r= n%10;
        sum+=r;
         n/=10;
     }
     if(sum%9==0)
     {
          cout<<"yes"<<endl;
     }
     else
     {
         cout<<"no"<<endl;
      }
    return 0;   
}
