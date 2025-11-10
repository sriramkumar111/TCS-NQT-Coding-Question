//find all symmetric pair from the given pair of array
#include<bits/stdc++.h>
using namespace std;
 //simpler way
void get_symmetric_pair(vector<pair<int,int>>&arr)
{
   unordered_map<int, int> mp;  // Stores first -> second value
   
    for (auto &p : arr) {
        int a = p.first, b = p.second;
        
        if(mp.find(b) ==mp.end())
        {
             mp[a]=b;
         }
          else
          {
             cout<<"("<<a<<","<<b<<")";
          }
    }
  
}



//vector<pair<int,int>> get_symmetric_pair(vector<pair<int,int>>&arr)
//{
//  unordered_map<int, int> mp;  // Stores first -> second value
//    vector<pair<int, int>> result;
//
//    for (auto &p : arr) {
//        int a = p.first, b = p.second;
//
//        // Check if (b, a) exists in the map
//        if (mp.find(b) != mp.end() && mp[b] == a) {
//            result.push_back({a, b});  // Symmetric pair found
//            mp.erase(b);//Remove used pair
//        } else {
//            mp[a] = b;  // Store the pair in the map
//        }
//    }
//
//
//   return result;
//}
int main()
{
  //if we know size of array
//   int n;
//   cin>>n;
//   vector<pair<int,int>>arr(n);
//
//   for(int i=0;i<n;i++)
//   {
//      cin>>arr[i].first>>arr[i].second;
//   }
//   cout<<endl;

  //if we don't know the size of array
//    vector<pair<int,int>>arr;
//
//    int n1,n2;
//    while(cin>>n1>>n2)
//    {
//       arr.push_back({n1,n2});
//    }
 
  //usign strign stream

   string input;
   getline(cin,input);
   stringstream ss(input);
   int n1,n2;
   vector<pair<int,int>>arr;
   while(ss>>n1>>n2)
   {
      arr.push_back({n1,n2});
   }
//   vector<pair<int,int>>ans=get_symmetric_pair(arr);
//   if(ans.empty())
//   {
//         cout<<"No symmetric pair"<<endl;
//   }
//   for(auto & it :ans)
//   {
//      cout<<"("<<it.first<<","<<it.second<<")" ;
//   }
    get_symmetric_pair(arr);
  return 0;
}

// brute force approach
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    vector<pair<int, int>> arr = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};
//
//    int n = arr.size();
//    cout << "The Symmetric Pairs are: " << endl;
//
//    for (int i = 0; i < n; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (arr[j].first == arr[i].second && arr[j].second == arr[i].first) {
//                cout << "(" << arr[i].first << ", " << arr[i].second << ") ";
//                break;  // Avoid duplicate printing
//            }
//        }
//    }
//
//    return 0;
//}
