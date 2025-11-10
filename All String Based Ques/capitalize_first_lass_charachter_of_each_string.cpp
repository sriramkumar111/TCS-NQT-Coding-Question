#include <bits/stdc++.h>
using namespace std;

string capi(string str) {
    stringstream ss(str);
    string temp, res;
// my name is ram  
    while (ss >> temp) {
        if (!temp.empty()) {
            temp[0] = toupper(temp[0]);  // Capitalize first letter
            temp[temp.length() - 1] = toupper(temp[temp.length() - 1]);  // Capitalize last letter
        }
        if (!res.empty()) res += " ";  // Maintain space between words
        res += temp;
    }

    return res;
}
void capi2(string &str)
{
   int n=str.size();
   
   for(int i=0;i<n;i++)
   {
       if(i==0||i==n-1)
       {
          if(islower(str[i]))
          {
             str[i]=toupper(str[i]);
          }
       }
       else if(str[i]==' ')
       {
          if(islower(str[i-1]))
          {
             str[i-1]=toupper(str[i-1]);
          }
          if(islower(str[i+1]))
          {
             str[i+1]=toupper(str[i+1]);
           }
       }
   }
}
int main() {
    string input;
    getline(cin, input);

    //cout << capi(input) << endl;
     capi2(input);
     cout<<input;

    return 0;
}

