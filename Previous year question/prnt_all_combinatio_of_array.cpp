#include<bits/stdc++.h>
using namespace std;
//O(n^2)
void print_all_subarrays(const vector<int>& arr) {
    int n = arr.size();
    
    for (int i = 0; i < n; i++) {
        stringstream subarray; // Efficient output handling
        for (int j = i; j < n; j++) {
            if (j > i) subarray << " ";  // Add space between numbers
            subarray << arr[j];
            cout << subarray.str() << endl;
        }
    }
}

void get_subarray(vector<int>arr)
{
   int n=arr.size();
   for(int i=0;i<n;i++)
   {
       for(int j=i;j<n;j++)
       {
          
           for(int k=i;k<=j;k++)
           {
                cout<<arr[k];
               if(k!=j) cout<<" ";
           }
           if(i!=n-1)
           {
                cout<<",";
           }
       }
       
      
   }

}


int main()
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
  // get_subarray(arr);
   print_all_subarrays(arr);
  
    
 
   return 0;
}
