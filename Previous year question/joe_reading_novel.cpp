#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

const int MOD = 1e9 + 7;

// Function to find the smallest missing positive integer in a sequence
int minMis(vector<int> &arr) {
    sort(arr.begin(), arr.end()); // Sort the sequence
    int missing = 1; // Start checking from 1

    for (int num : arr) {
        if (num == missing) {
            missing++; // If `missing` is found, check for the next one
        } else if (num > missing) {
            break; // If `num` is greater than `missing`, we found the answer
        }
    }
    return missing;
}

// Function to generate all subsequences and calculate sum of B(S)
int fun(int n, vector<int> &s) {
    int ans = 1; // Start with 1 for empty subsequence
    int totalSubsequences = (1 << n); // 2^N total subsequences

    for (int mask = 1; mask < totalSubsequences; mask++) { // Start from 1 to avoid empty subsequence
        vector<int> subseq;
        for (int j = 0; j < n; j++) {
            if (mask & (1 << j)) {
                subseq.push_back(s[j]); // Include this element
            }
        }
        ans = (ans + minMis(subseq)) % MOD; // Compute and add B(S)
    }

    return ans;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    cout << fun(n, s) << endl;

    return 0;
}
/*
Joe was reading an interesting novel when all of a sudden, his 5 year old son came 
to him and started asking few questions about functions. 
Telegram: @PLACEMENTLELO 
He tried making him understand various functions, but his son didn’t get find it 
interesting. 
Then he created his function Absent number function A(S) 
According to this function, there is always the smallest positive integer number in a 
sequence that is not available. 
In simple words,if you sort the given sequence ,then the smallest integer number 
(other than 0) which is not present in the sequence is the Absent number. 
Consider a sequence S= [1, 2, 3], then B(S)=4. 
The minimum value greater than 0 which is not present here is in the sequence is 4. 
Now his son found it interesting ,so Joe extended this logic to sub-sequence. 
If there is a given sequence S, you have to find the Absent Number for each sub
sequence and then sum it up. 
if the answer is large, print the result modulo, 109 +7. 
Below are the various sub-sequences of it, 
Basically it will be 2N: 
Let say there exist a sequence with N = 3, and sequence S = [1, 2, 1] 
[ ] : B([ ]) = 1 
[1] : B([1]) = 2 
[2] : B([2]) = 1 
[1] : B([1]) = 2 
[1, 2] : B([1, 2]) = 3 
[2, 1] : B([2, 1]) = 3 
[1, 1] : B([1, 1]) = 2 
[1, 2, 1] : B([1, 2, 1]) = 3 
Telegram: @PLACEMENTLELO 
Total sum of all B(S) = 1+2+1+2+3+3+2+3 = 17. 
Hence the answer is 17. 
Example 1: 
• Input: 
2 -> input Integer ,N 
1 1 -> input Integer,S 
• Output: 
7 -> Output 
• Explanation: 
In the above scenario below are the various sub-sequence and respective function of it: 
[ ] : B(l) = 1 
[1]: B([1])= 2  
[1]: B([1]) = 2  
[1,1]: B([1,1]) = 2 
Total sum of all B(S) = 1+2+2+2 = 7 Hence the answer is 7. 
Example 2: 
• Input: 
3 -> Input integer, N 
1 2 1 -> Input integer, S 
• Output: 
17->Output 
• Explanation: 
In the above scenario below are the various sub-sequences and respective function of it. 
[ ] : B([ ]) = 1  
[1] : B([1]) = 2 
[2] : B([2]) =1 
[1] : B([1]) = 2  
[1, 2] : B([1, 2]) = 3  
[2, 1] : B([2, 1]) = 3 
[1, 1] : B([1, 1]) = 2  
[1, 2, 1] : B([1, 2, 1]) = 3 
Total sum of all B(S) = 1 + 2 + 1 + 2 + 3 + 3 + 2 + 3 = 17. 
Hence the answer is 17. 
 */
