substr in C++
The substr function in C++ is used to extract a substring from a given string.

Syntax
cpp
Copy
Edit
string substr (size_t pos, size_t len) const;
pos ? The starting position of the substring.
len ? The number of characters to extract (optional). If omitted, it extracts till the end.
Example 1: Extract a substring
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    string str = "Hello, World!";
    
    string sub1 = str.substr(7, 5); // Extract 5 characters from index 7
    cout << sub1 << endl; // Output: World

    return 0;
}
Example 2: Extract from a position till the end
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    string str = "Programming";
    
    string sub2 = str.substr(3); // Extract from index 3 to the end
    cout << sub2 << endl; // Output: gramming

    return 0;
}
Example 3: Using substr with find
Extracting a domain from an email:

cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    string email = "user@example.com";
    
    size_t pos = email.find('@'); // Find position of '@'
    string domain = email.substr(pos + 1); // Extract after '@'

    cout << "Domain: " << domain << endl; // Output: example.com

    return 0;
}
Use Cases of substr
Extracting a part of a string (e.g., extracting a word from a sentence).
Working with filenames or URLs (e.g., getting file extensions).
Parsing structured text (e.g., extracting substrings from CSV, JSON).
Time Complexity
O(N) where N is the length of the extracted substring.
