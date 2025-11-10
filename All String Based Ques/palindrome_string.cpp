#include<bits/stdc++.h>
using namespace std;


maM
bool check_palindrome(string s)
{
   int left=0,right=s.length()-1;
  
   while(left<right)
   {
      if(tolower(s[left])==tolower(s[right]))
      {
         left++;
         right--;
      }
      else{
        return false;
      }
   }
   return true;
}
int main()
{

   string input;
   getline(cin,input);

   cout<<(check_palindrome(input) ?"yes":"no");

   return 0;
}
