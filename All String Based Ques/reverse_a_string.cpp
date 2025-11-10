#include<bits/stdc++.h>
using namespace std;

string reverse_string(string &str)
{
  int l=0,r=str.length()-1;
  while(l<=r)
  {
     swap(str[l],str[r]);
     l++;
     r--;
  }
   
   return str;
}

int main()
{
   string input;
   getline(cin,input);

  // reverse(input.begin(),input.end());
  //cout<<input;

  cout<<reverse_string(input);

   return 0;


}
