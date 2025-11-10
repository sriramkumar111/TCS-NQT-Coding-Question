#include<iostream>
using namespace std;

bool checkPalindrome(string str,int i,int n)
{
  if(i>=n/2) return true;

  if(str[i]!=str[n-i-1]) return false;

  return checkPalindrome(str,i+1,n);

} 
int main()
{
   string str;
   cin>>str;
   if(checkPalindrome(str,0,str.length()))
   {
        cout<<str<<" is palindrome"<<endl;
   }
   else
   {
        cout<<str<<" is not palindrome"<<endl;
   }

   return 0;
}
