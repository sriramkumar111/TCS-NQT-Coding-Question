#include<bits/stdc++.h>
using namespace std;

string remove_char(string str)
{
   string res="";
   
   for(char c:str)
   {
      if(isalpha(c))
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

   cout<<remove_char(input);

   return 0;


}
