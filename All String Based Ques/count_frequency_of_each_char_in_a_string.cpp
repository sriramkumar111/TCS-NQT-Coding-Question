#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    map<char,int>mp;
    for(char c:input)
    {
       if(!isspace(c))
       {
           mp[c]++;
       }
    }
     
   for(auto & it:mp)
   {
      cout<<it.first<<it.second<<" ";
    }

    return 0;
}

