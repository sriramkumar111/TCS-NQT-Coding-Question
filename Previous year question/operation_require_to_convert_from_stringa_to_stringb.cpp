#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    // Read input size
    int n;
    cin >> n;
    
    // Read two input strings
    string a, b;
    cin >> a >> b;
    
    // If both strings are already the same, output 1 and exit
    if (a == b) {
        cout << 1 << endl;
        return 0;
    }
    
    // Extract differing characters from a and corresponding positions in b
    string res = "", res2 = "";
    for (int x = 0; x < n; x++) {
        if (a[x] != b[x]) {
            res += a[x];
            res2 += b[x];
        }
    }
    
    int ans = 0; // Flag to track the answer condition
    
    // Check if transformation is possible
    for (char i : a) {
//The condition if (ans != 0) { break; } ensures that once a valid 
//answer (ans) has been determined, the loop terminates early.
        if (ans != 0) {
            break;
        }
        
        // If any character in a is not present in b, transformation is impossible
        if (b.find(i) == string::npos) {
            cout << -1 << endl;
            break;
        } else {
            unordered_set<char> res2_set(res2.begin(), res2.end());
            bool valid = true;
            
            // Ensure all characters in res2 exist in a
            for (char x : res2_set) {
                if (a.find(x) == string::npos) {
                    cout << -1 << endl;
                    ans += 1;
                    valid = false;
                    break;
                }
            }
            
            // If all conditions meet, output the unique character count in res2
            if (valid) {
                cout << res2_set.size() << endl;
                ans += 1;
            }
        }
        
        if (ans == 1) {
            break;
        }
    }
    
    return 0;
}


//Approach Explanation
//The given C++ program checks whether one string (a) can be transformed into another string (b) following specific conditions. Here's how the approach works:
//
//Step 1: Input Handling
//Read an integer n (length of both strings).
//Read two strings, a and b.
//Step 2: Immediate Check for Equality
//If a and b are already the same, print 1 and exit.
//Step 3: Identify Mismatched Characters
//Iterate through both strings and collect characters that differ at the same index.
//Store differing characters from a in res.
//Store corresponding characters from b in res2.
//Step 4: Check Feasibility of Transformation
//Iterate through characters in a:
//Check if a contains all characters in b:
//If a lacks any character from b, output -1 and exit (transformation is impossible).
//Check if all characters in res2 exist in a:
//Use an unordered_set to store unique characters from res2 (to avoid duplicate processing).
//If any character in res2 does not exist in a, output -1 and exit.
//Otherwise, print the number of unique characters in res2.
//Step 5: Output Result
//The number of unique characters in res2 represents the minimum number of transformations required.
//Time Complexity Analysis
//Extracting Differences (O(n))
//
//We iterate over n elements once.
//Checking Presence in a (O(n))
//
//Searching in a string with find() takes O(n), but it runs once per unique character.
//Using unordered_set (O(1) on average per operation)
//
//Storing characters in a set and checking their presence is O(1) per operation.
//Overall Complexity: O(n)
//
//The worst-case scenario runs in linear time.
//Key Takeaways
//Uses unordered_set to track unique mismatched characters efficiently.
//Uses string::find() to check if transformation is possible.
//Ensures early termination if transformation is impossible.

//question
//Ayush is working on a strange algorithm where he wants to convert a string 
//from A to B, both the strings of equal length N
//
//Below are the rules which can be performed to  convert a string
//
//String A and B are of equal length
//Both of them are in lower case
//Choose a subset X from the string A, between the index 1 and N.
//Let ‘s’ be the letter which alphabetically comes before all other letters 
//in the subset. Let ‘s’ be called the ‘smallest element’ in the subset.
//Replace all the elements of subset with the letter ‘s’
//Find the minimum number of moves which is required to perform the conversion. 
//If it is not possible to convert the string from A to b then return -1
//
//Let us try to understand it with and examples
//
//Suppose there are 2 strings
//
//A = abcab
//
//B = aabab
//
//Operation 1:
//
//Now we have chosen a subset S, let us say we have taken index 2,3,5 from A
//
//Then the subset S becomes [bcb]
//
//Next, we have to choose the smallest element , 6041 here, which is b here in b & c
//
//Next, we have to replace all the other elements in subset with this element. So ‘b’ with replace everything in [bcb]. which becomes [bbb].
//
//Now we will place all the respective elements back to their respective index. 
//This will update the original string as [abbab]
//
//Operation 2:
//
//Original string [abbab]
//
//Now we have chosen a subset S, let say we have taken a index 1,2,4 from A
//
//Then the subset become [aba]
//
//Next, we have to choose the smallest element, which is here in a & b.
//
//Next, we have to replace the smallest with all the other elements in subset. So ‘a’ will replace everything in [aba]
//
//Now we will place all the respective elements back to their respective index. This will update the original string as [aabab]
//
//This is exactly same as String B
//Hence it is possible to convert string A to B, with 2 operations. So, the answer is 2.
