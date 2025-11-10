#include<bits/stdc++.h>
using namespace std;

string remove_space(string str)
{
   string res="";
   
   for(char c:str)
   {
      if(!isspace(c))
      {
          res+=c;
       }
    }
   
   return res;
}

int main()
{
   string input;
   getline(cin,input);

   cout<<remove_space(input);

   return 0;


}
