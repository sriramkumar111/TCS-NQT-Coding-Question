/*Write a program that generates a password adhering to the following conditions:

• The password must consist of at least 8 characters.
• It must contain at least one integer.
• It must contain at least one special character from the set ('#', '@'}.
• It must contain at least one uppercase letter and one lowercase letter.
• Each character in the password should be incremented by the number of times
 specified by the second input.

Your program should take two inputs:
1.A string representing the initial password.
2. An integer representing the number of times each character should be incremented.

Your program should then generate and output the modified password.
Example 1:
Input1: werV432@
Input2:2

Output: ygtX654#
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    int num;
    cin >> input;
    cin >> num;

    // Checking minimum length condition
    if (input.length() < 8) 
    {
        cout << "invalid input";
        return 1;
    }

    // Checking for special character ('@' or '#')
    if (input.find('@') == string::npos && input.find('#') == string::npos)
    {
        cout << "invalid input";
        return 1;
    }

    // Checking at least one lowercase, uppercase, and digit
    int low = 0, up = 0, d = 0;
    for (char c : input)
    {
        if (isupper(c)) up++;
        else if (islower(c)) low++;
        else if (isdigit(c)) d++;
    }

    if (low == 0 || up == 0 || d == 0)
    {
        cout << "invalid" << endl;
        return 1;
    }

    string modified_str = "";
    for (char c : input)
    {
        if (c == '@') modified_str += '#';
        else if (c == '#') modified_str += '@';
        else if (islower(c)) modified_str += char('a' + (c - 'a' + num) % 26); // Handle lowercase wrap
        else if (isupper(c)) modified_str += char('A' + (c - 'A' + num) % 26); // Handle uppercase wrap
        else if (isdigit(c)) modified_str += char(((c - '0') + num) % 10 + '0'); // Handle digit wrap
        else modified_str += c; // Any other character remains unchanged
    }

    cout << modified_str << endl;
}

