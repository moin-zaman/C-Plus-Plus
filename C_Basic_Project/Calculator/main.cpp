#include <iostream>
using namespace std;

void printMenu() {
    cout << "\n===== Simple Menu Calculator =====\n";
    cout << "1) Add\n";
    cout << "2) Subtract\n";
    cout << "3) Multiply\n";
    cout << "4) Divide\n";
    cout << "0) Exit\n";
    cout << "Choose an option: ";
}

int main() {
    while (true) {
        printMenu();
        int choice;
        cin >> choice;

        if (!cin) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input. Try again.\n";
            continue;
        }

        if (choice == 0) {
            cout << "Exiting. Bye!\n";
            break;
        }

        float a, b;
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;

        switch (choice) {
            case 1:
                cout << "Result: " << (a + b) << "\n";
                break;
            case 2:
                cout << "Result: " << (a - b) << "\n";
                break;
            case 3:
                cout << "Result: " << (a * b) << "\n";
                break;
            case 4:
                if (b == 0) {
                    cout << "Error: Division by zero!\n";
                } else {
                    cout << "Result: " << (a / b) << "\n";
                }
                break;
            default:
                cout << "Unknown option. Choose 0-4.\n";
        }
    }
    return 0;
}
