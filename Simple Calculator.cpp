#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;

    cout << "Welcome to the Simple Calculator!" << endl;

    while (true) {
    
        cout << "\nChoose an operation:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

       
        if (choice == 5) {
            cout << "Thank you!" << endl;
            break;
        }

        
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        if (choice == 1) {
            result = num1 + num2;
            cout << "Addition is: " << result << endl;
        } else if (choice == 2) {
            result = num1 - num2;
            cout << "Subtraction is: " << result << endl;
        } else if (choice == 3) {
            result = num1 * num2;
            cout << "Multiplication is: " << result << endl;
        } else if (choice == 4) {
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Division is: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

