#include<bits/stdc++.h>
using namespace std;

int min_operation(int a,int b,int c)
{
    int arr[3]={a,b,c};
    sort(arr,arr+3);
    
    if(arr[0]==arr[1]&& arr[1]==arr[2])
       return 0;
    
    int cnt=0;
    while(true)
    {
       arr[0] +=1;
       arr[1] +=1;
       arr[2] -=1;
       cnt++;
       sort(arr,arr+3);
       
       if(arr[0]==arr[1] && arr[1]==arr[2])  return cnt;
      
       if((arr[0]==arr[1] && arr[1]+1 == arr[2]) || 
            (arr[1]==arr[2] && arr[0]+1 ==arr[1]))
       {
            return -1;
        }
       
    }

}

int main()
{

   int t;
   cin>>t; // number of test cases
   while(t--)
   {
        int a,b,c;
        cin>>a>>b>>c;
        cout<<min_operation(a,b,c)<<endl;
   }

  return 0;
}
