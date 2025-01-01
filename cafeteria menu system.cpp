
#include <iostream>
#include <string>
using namespace std;

// Function to display menu
void displayMenu() {
    cout << "Cafeteria Menu System" << endl;
    cout << "-------------------------" << endl;
    cout << "1. Breakfast" << endl;
    cout << "2. Lunch" << endl;
    cout << "3. Dinner" << endl;
    cout << "4. Beverages" << endl;
    cout << "5. Exit" << endl;
}

// Function to display breakfast menu
void displayBreakfastMenu() {
    cout << "Breakfast Menu" << endl;
    cout << "-----------------" << endl;
    cout << "1. Pancakes ($3.99)" << endl;
    cout << "2. Omelette ($4.99)" << endl;
    cout << "3. Breakfast Burrito ($5.99)" << endl;
    cout << "4. Back to Main Menu" << endl;
}

// Function to display lunch menu
void displayLunchMenu() {
    cout << "Lunch Menu" << endl;
    cout << "-------------" << endl;
    cout << "1. Sandwich ($6.99)" << endl;
    cout << "2. Salad ($7.99)" << endl;
    cout << "3. Soup ($5.99)" << endl;
    cout << "4. Back to Main Menu" << endl;
}

// Function to display dinner menu
void displayDinnerMenu() {
    cout << "Dinner Menu" << endl;
    cout << "-------------" << endl;
    cout << "1. Steak ($14.99)" << endl;
    cout << "2. Chicken ($12.99)" << endl;
    cout << "3. Vegetarian ($10.99)" << endl;
    cout << "4. Back to Main Menu" << endl;
}

// Function to display beverages menu
void displayBeveragesMenu() {
    cout << "Beverages Menu" << endl;
    cout << "-----------------" << endl;
    cout << "1. Soda ($1.99)" << endl;
    cout << "2. Juice ($2.99)" << endl;
    cout << "3. Coffee ($1.49)" << endl;
    cout << "4. Back to Main Menu" << endl;
}

// Function to handle user order
void placeOrder() {
    int choice;
    float total = 0.0;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            total += 3.99;
            break;
        case 2:
            total += 4.99;
            break;
        case 3:
            total += 5.99;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
    }

    cout << "Your total is: $" << total << endl;
}

int main() {
    int choice;

    while (true) {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayBreakfastMenu();
                placeOrder();
                break;
            case 2:
                displayLunchMenu();
                placeOrder();
                break;
            case 3:
                displayDinnerMenu();
                placeOrder();
                break;
            case 4:
                displayBeveragesMenu();
                placeOrder();
                break;
            case 5:
                cout << "Thank you for using our cafeteria menu system. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }

    return 0;
}


