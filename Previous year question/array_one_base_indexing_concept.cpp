#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n + 1];  // Extra space to accommodate 1-based indexing

    cout << "Enter " << n << " elements: ";
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];  // Taking input from index 1
    }

    cout << "Array elements (1-based index): ";
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];  // Normal array allocation

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Store at 0-based index
    }

    cout << "Array elements (1-based index access): ";
    for (int i = 1; i <= n; i++) {
        cout << arr[i - 1] << " ";  // Access using i-1
    }
    return 0;
}

