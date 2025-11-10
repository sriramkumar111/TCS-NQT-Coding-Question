#include<bits/stdc++.h>
using namespace std;

bool check_vowel(char c)
{
   if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || 
         c=='o' ||c=='u')
   {
       return true;
    }
    return false; 

}
int main()
{
   string s;
   getline(cin,s);
   
   int cntv=0,cntc=0,cnts=0;

   for(int i=0;i<s.length();i++)
   {
     if(check_vowel(s[i]))
     {
        cntv++;
     }
     else if(s[i]==' ')
     {
        cnts++;
     }
     else{
      cntc++;
     }

   }
   cout<<"Vowel : "<<cntv<<endl;
   cout<<"Consonant : "<<cntc<<endl;
   cout<<"Space : "<<cnts<<endl;
   return 0;


}
