#include<bits/stdc++.h>
using namespace std;

string remove_vowel(string str)
{
   string vow="aeiouAEIOU";
   string res="";

    for(char c:str)
    {
       if(vow.find(c)==string::npos)
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

   cout<<remove_vowel(input);



//   string s="";
//   for(char c:input)
//   {
//      if(tolower(c)=='a'||tolower(c)=='e'||tolower(c)=='i'||tolower(c)=='o'||tolower(c)=='u')
//      {
//        continue;
//      }
//      else{
//        s +=c;
//      }
//   }
//   cout<<s;
   return 0;


}
