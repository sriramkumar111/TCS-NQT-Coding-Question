#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int temp;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
       
    }
    map<int,int>mp;

    for(int n:arr)
    {
         mp[n]++;
    }

    for(auto &it:mp)
    {
       if(it.second>=n/2)
       {
           cout<<it.first<<endl;
        }
    }
     

    return 0;
}
