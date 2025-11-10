#include<bits/stdc++.h>
using namespace std;


vector<int> case_1()
{
   string input;
   getline(cin,input);
   stringstream ss(input);
   vector<int>arr;
   char c;
   while(ss>>c)
   {
      int num;
      if(c!='[' && c!=',' && c!=']')
      {
          ss.unget();
          ss>>num;
          arr.push_back(num);
      }

   }
    return arr;
}


vector<int>space_sep()
{ 
   string input;
   getline(cin,input);
   stringstream ss(input);
   int num;
   vector<int>arr;
   while(ss>>num)
   {

     arr.push_back(num);
   }
  return arr;

}

vector<int> comma_sep()
{
   string input;
   getline(cin,input);
   stringstream ss(input);
   int num;
   char c;
   vector<int>arr;

//    while(ss>>num)
//    {
//        arr.push_back(num);
//        if(ss.peek()==',')
//           ss.ignore();
//    }

    while(ss>>num)
    {
         arr.push_back(num);
         ss>>c;
    }
    return arr;
}

vector<int>arr_size_not_given()
{ 
  string input;
  getline(cin,input);
  vector<int>arr;
  stringstream ss(input);
  int num;
  while(ss>>num)
  { 
   arr.push_back(num);

   }
   return arr;

}
int main()
{
//   //case -1 arr = [1,2,3]
//   vector<int>arr = case_1();
//   for(int n:arr)
//   {
//       cout<<n <<" ";
//    }
//    cout<<endl;

////case-2 space separated input
//   vector<int>arr = space_sep();
//   for(int n:arr)
//  {
//      cout<<n <<" ";
//    }
//   cout<<endl;
//
//// case-3 comma separated input
//   vector<int>arr = comma_sep();
//   for(int n:arr)
//  {
//      cout<<n <<" ";
//    }
//   cout<<endl;

// case-4 array size not given
   vector<int>arr = arr_size_not_given();
   for(int n:arr)
  {
      cout<<n <<" ";
    }
   cout<<endl;

   return 0;
}
