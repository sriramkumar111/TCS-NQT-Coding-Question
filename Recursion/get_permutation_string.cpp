#include<iostream>
using namespace std;
void get_perm(int ind,string s)
{
   if(ind>=s.length())
   {
       cout<<s<<endl;
       return ;
    }
      int i=0;
     for(int i=ind;i<s.length();i++)
     {
          swap(s[i],s[ind]);
          get_perm(ind+1,s);
          swap(s[i],s[ind]);
      }

}
int main()
{
  int n1,n2,n3;
  cin>>n1>>n2>>n3;
  string s="";
   for(int i=0;i<n2;i++)
   {
       s +='b';
   }
  for(int i=0;i<n1;i++)
  {
       s +='a';
   }
  
   for(int i=0;i<n3;i++)
   {
       s +='c';
   }
   
   get_perm(0,s);
}
