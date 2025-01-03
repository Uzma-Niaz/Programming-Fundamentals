#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    string department;
};

const int MAX_STUDENTS = 100; // Maximum number of students
Student students[MAX_STUDENTS];
int studentCount = 0;

// Function prototypes
void loadFromFile();
void saveToFile();
void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

int main() {
    loadFromFile(); // Load data from file at the start
    int choice;

    do {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search for a Student by ID\n";
        cout << "4. Update Student Information\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            case 6: saveToFile(); cout << "Exiting the program...\n"; break;
            default: cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}

// Function to load students from file
void loadFromFile() {
    ifstream inFile("students.txt");
    if (!inFile) return; // If file doesn't exist, skip

    studentCount = 0;
    while (inFile >> students[studentCount].id) {
        inFile.ignore(); // Skip the comma
        getline(inFile, students[studentCount].name, ',');
        getline(inFile, students[studentCount].department);
        studentCount++;
    }
    inFile.close();
}

// Function to save students to file
void saveToFile() {
    ofstream outFile("students.txt");
    for (int i = 0; i < studentCount; i++) {
        outFile << students[i].id << "," 
                << students[i].name << "," 
                << students[i].department << endl;
    }
    outFile.close();
}

// Function to add a new student
void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        cout << "Student limit reached. Cannot add more students.\n";
        return;
    }

    cout << "Enter Student ID: ";
    cin >> students[studentCount].id;
    cin.ignore(); // Clear input buffer
    cout << "Enter Student Name: ";
    getline(cin, students[studentCount].name);
    cout << "Enter Department: ";
    getline(cin, students[studentCount].department);

    studentCount++;
    cout << "Student added successfully!\n";
}

// Function to display all students
void displayStudents() {
    if (studentCount == 0) {
        cout << "No students found.\n";
        return;
    }

    cout << "\n===== Student List =====\n";
    for (int i = 0; i < studentCount; i++) {
        cout << "ID: " << students[i].id 
             << ", Name: " << students[i].name 
             << ", Department: " << students[i].department << endl;
    }
}

// Function to search for a student by ID
void searchStudent() {
    int searchId;
    cout << "Enter Student ID to search: ";
    cin >> searchId;

    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == searchId) {
            cout << "ID: " << students[i].id 
                 << ", Name: " << students[i].name 
                 << ", Department: " << students[i].department << endl;
            return;
        }
    }
    cout << "Student with ID " << searchId << " not found.\n";
}

// Function to update student details by ID
void updateStudent() {
    int updateId;
    cout << "Enter Student ID to update: ";
    cin >> updateId;

    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == updateId) {
            cout << "Enter New Name: ";
            cin.ignore();
            getline(cin, students[i].name);
            cout << "Enter New Department: ";
            getline(cin, students[i].department);
            cout << "Student updated successfully!\n";
            return;
        }
    }
    cout << "Student with ID " << updateId << " not found.\n";
}

// Function to delete a student by ID
void deleteStudent() {
    int deleteId;
    cout << "Enter Student ID to delete: ";
    cin >> deleteId;

    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == deleteId) {
            for (int j = i; j < studentCount - 1; j++) {
                students[j] = students[j + 1];
            }
            studentCount--;
            cout << "Student deleted successfully!\n";
            return;
        }
    }
    cout << "Student with ID " << deleteId << " not found.\n";
}

