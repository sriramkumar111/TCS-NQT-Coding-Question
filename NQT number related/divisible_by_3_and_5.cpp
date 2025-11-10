#include <iostream>
#include <cmath> // Use <cmath> instead of <math.h>
using namespace std;

bool check_three(int n) {
   if(n<3) return false;
   int sum=0;
   while(n>0)
   {
      int r=n%10;
      sum +=r;
      n/=10;
    }
    if(sum%3==0) return true;
    return false;
}

int main() {
    int s, e;
    cin >> s >> e;

    bool first =true;

    for(int i=s;i<=e;i++)
    {
        if((i%10==0 || i%10==5)&check_three(i))
        {
            if(!first) cout<<",";
            cout<<i;
            first=false;
        }
    }

    cout << endl;
    return 0;
}

