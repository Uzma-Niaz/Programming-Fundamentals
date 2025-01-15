#include <iostream>
#include <string>
using namespace std;

int main() {
    const string Password = "uzma";
    const int maxAttempts = 2; 
    int attempts = 0; 
    string inputPassword;

up:
    if (attempts >= maxAttempts) {
        cout << "Too many attempts" << endl;
        return 0; 
    }

    cout << "Enter password: ";
    cin >> inputPassword;

    if (inputPassword == Password) {
        cout << "Welcome! uzma" << endl;
        return 0; 
    } else {
        cout << "Incorrect password. Try again." << endl;
        attempts++;
        goto up;
    }

    return 0;
}
