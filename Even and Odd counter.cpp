#include <iostream>
using namespace std;

int main() {
    int evenCount = 0;
    int oddCount = 0;
    int lowerLimit, upperLimit;

    // Input range from user
    cout << "Enter lower limit: ";
    cin >> lowerLimit;
    cout << "Enter upper limit: ";
    cin >> upperLimit;

    // Count even and odd numbers
    for (int i = lowerLimit; i <= upperLimit; i++) {
        if (i % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Display results
    cout << "Even numbers count: " << evenCount << endl;
    cout << "Odd numbers count: " << oddCount << endl;

    return 0;
}

