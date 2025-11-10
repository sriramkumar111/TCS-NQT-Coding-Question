#include <iostream>
#include <cmath> // Use <cmath> instead of <math.h>
using namespace std;

bool checkPrime(int n) {
    if (n == 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
//bool checkPrime(int n) {
//    if (n < 2) return false; // 0 and 1 are not prime
//    if (n == 2) return true; // 2 is the only even prime
//    if (n % 2 == 0) return false; // Eliminate even numbers > 2
//    
//    int limit = sqrt(n); // Calculate sqrt(n) once
//    for (int i = 3; i <= limit; i += 2) { // Check only odd numbers
//        if (n % i == 0)
//            return false;
//    }
//    return true;
//}
int main() {
    int s, e;
    cin >> s >> e;

    bool first = true; // To track the first printed number

    for (int i = s; i <= e; i++) {
        if (checkPrime(i)) {
            if (!first) cout << ","; // Print comma only after the first number
            cout << i;
            first = false;
        }
    }

    cout << endl;
    return 0;
}

