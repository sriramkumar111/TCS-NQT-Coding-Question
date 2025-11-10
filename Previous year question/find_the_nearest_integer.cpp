/*Write a program to take input of X and Y in a new line.
Print the number which is nearer the Integer when divided by Y.
 14 the may shift-2
Example 1
Input:
x = 13
Y = 3
Output: 12

Example 2:
Input:
x = 13
Y = 3
Output: 12  */

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int x,y;
  cin>>x;
  cin>>y;
  
  int temp = ceil(x/y);
  cout<<temp*y;

     return 0;
}

/*method 2
#include <iostream>
using namespace std;

int customRound(double number) {
    int integerPart = (int) number;
    double decimalPart = number - integerPart;

    if (decimalPart >= 0.5) {
        return integerPart + 1;
    } else {
        return integerPart;
    }
}

int main() {
    int x, y;
    cin >> x;
    cin >> y;

    double nearest = (double) x / y;
    int roundedNumber = customRound(nearest);
    cout << roundedNumber * y << endl;

    return 0;
}
 */
