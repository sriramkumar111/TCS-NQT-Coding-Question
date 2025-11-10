#include<bits/stdc++.h>
using namespace std;

string remove_bracket(string str)
{
  string res="";
  for(char c:str)
  {
    if(c!='('&&c!=')')
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

  cout<<remove_bracket(input);

   return 0;


}
