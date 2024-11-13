#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()
using namespace std;

int main() {
    int num;
    int guess;
    int tries = 0;  // Initialize tries to 0
    
    srand(time(NULL));  // Initialize random seed based on current time
    num = (rand() % 100) + 1;  // Random number between 1 and 100
    cout << "****** NUMBER GUESSING GAME ******\n";
    
    do {
        cout << "Enter a guess between (1-100): ";
        cin >> guess;
        tries++;  // Increment tries each time a guess is made
        
        if (guess > num) {
            cout << "Too high\n";
        }
        else if (guess < num) {
            cout << "Too low\n";
        }
        else {
            cout << "CORRECT! Number of tries: " << tries << '\n';
        }

    } while (guess != num);
    
    cout << "*\n";
}

