#include<bits/stdc++.h>
using namespace std;

int main()
{
   string input;
   getline(cin,input);
   
   string rever= input;
   reverse(rever.begin(),rever.end());
  if(input==rever){
      cout<<"yes";
  }
  else
  {
       cout<<"no"<<endl;
  }
  return 0;


}
