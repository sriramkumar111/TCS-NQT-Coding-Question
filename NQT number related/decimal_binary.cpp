#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
   int n;
   cin>>n;

   string bin="";
   int i=0;
   while(n>0)
   {
      int r=n%2;
      bin =bin+char('0'+r);
      n/=2;
    }
    reverse(bin.begin(),bin.end());
    if(bin=="") bin="0";
    cout<<bin;
  return 0;
}


//without using reverse function
//int main()
//{
//    int n;
//    cin >> n;
//
//    string bin = "";
//    while (n > 0)
//    {
//        int r = n % 2;   // Get remainder when divided by 2
//        bin = char('0' + r) + bin; // Convert to char and prepend to string
//        n /= 2;          // Divide by 2
//    }
//
//    if (bin == "")  // If n was 0, set bin to "0"
//        bin = "0";
//
//    cout << bin;
//    return 0;
//}

