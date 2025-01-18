#include <iostream>
using namespace std;
void checkOddOrEven(int number) {
    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }
}

int main() {
    int number;

    cout << "Enter a number to check if it's odd or even: ";
    cin >> number;

    checkOddOrEven(number);

    return 0;
}
