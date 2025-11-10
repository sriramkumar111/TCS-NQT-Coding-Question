//sum of number in a string ,multiple consecutive digit will
//be considered as one number
#include<bits/stdc++.h>
using namespace std;

"223455567"
int sum_digit(string str)
{
   int sum=0;
   string temp="";
   for(char c:str)
   { 
      if(isdigit(c))
      {
         temp +=c;
       }
      else
      {
          if(!temp.empty()){
           int res = stoi(temp);
           sum +=res;
           temp="";
          }
      }
   }
   if(!temp.empty())
   {
      sum +=stoi(temp);
   }
   return sum;
}

int main()
{
   string input;
   getline(cin,input);

   cout<<sum_digit(input);

   return 0;


}
//number to string 
//C++, you can convert an integer to a string using several methods:
//
//1. Using to_string() (Recommended)
//cpp
//Copy
//Edit
//int num = 123;
//string str = to_string(num);
//cout << str;  // Output: "123"
//? Simple and efficient
//? Available in C++11 and later
//
//2. Using stringstream
//cpp
//Copy
//Edit
//#include <sstream>
//int num = 456;
//stringstream ss;
//ss << num;
//string str = ss.str();
//cout << str;  // Output: "456"
//? Works in all C++ versions
//? Slightly less efficient than to_string()
