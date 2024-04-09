#include <iostream>
#include <fstream>
#include <string> // Include string header for string usage
using namespace std;

class Employee {
    int id;
    string name;
    int salary;

public:
    void Record() {
        cout << "Enter Employee id: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name; // Fixed input operator
        cout << "Enter Salary: ";
        cin >> salary;

        ofstream out("employee.txt", ios::app); // Corrected file name
        if (!out.is_open()) { // Fixed condition
            cout << "Error Writing!" << endl;
        } else {
            out << id << " " << name << " " << salary << endl; // Write data to file
            cout << "Employee ID: " << id << endl; // Added colon and fixed formatting
            cout << "Name: " << name << endl;
            cout << "Salary: " << salary << endl;
        }
        out.close();
    }

    void display() {
        ifstream in("employee.txt");
        if (!in.is_open()) {
            cout << "Error Reading!" << endl;
        } else {
            cout << "Employee Records: " << endl;
            while (in >> id >> name >> salary) {
                cout << "Employee ID: " << id << endl;
                cout << "Name: " << name << endl;
                cout << "Salary: " << salary << endl;
            }
        }
        in.close();
    }

    void Search() {
        int searchId; // Changed variable name to searchId
        cout << "Enter ID to Search: ";
        cin >> searchId; // Changed variable name to searchId
        ifstream in("employee.txt");
        if (!in.is_open()) {
            cout << "Error Reading!" << endl;
        } else {
            bool found = false;
            while (in >> id >> name >> salary) {
                if (id == searchId) { // Changed variable name to searchId
                    found = true;
                    cout << "Record found: " << endl;
                    cout << "Employee ID: " << id << endl;
                    cout << "Name: " << name << endl;
                    cout << "Salary: " << salary << endl;
                    break;
                }
            }
            if (!found) { // Moved outside of while loop
                cout << "Record not found." << endl;
            }
        }
        in.close();
    }
};

int main() {
    Employee emp1;
    int choice;
    do {
        cout << "\n1. Add New Record\n";
        cout << "2. Display All Records\n"; // Fixed typo in menu option
        cout << "3. Search Record by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                emp1.Record();
                break;
            case 2:
                emp1.display();
                break;
            case 3:
                emp1.Search();
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 4);
    return 0;
}
