#include <iostream>
#include <string>
using namespace std;

void printMenu(int a, int b, string op) {
    cout << "\n===== Simple Menu Calculator =====\n";
    cout << "Options: add | subtract | multi | divi | exit\n";
    cout << "--------------------------------------------\n";

    if (op == "add") {
        cout << "Result : " << (a + b) << endl;
    }
    else if (op == "subtract") {
        cout << "Result : " << (a - b) << endl;
    }
    else if (op == "multi") {
        cout << "Result : " << (a * b) << endl;
    }
    else if (op == "divi") {
        if (b == 0) {
            cout << "Error: Division by zero not allowed!" << endl;
        } else {
            cout << "Result : " << ( (float)a / b ) << endl; // float division
        }
    }
    else if (op == "exit") {
        cout << "Exiting program..." << endl;
    }
    else {
        cout << "Unknown Option. Please choose add/subtract/multi/divi/exit." << endl;
    }
}

int main() {
    while (true) {
        int a, b;
        cout << "\nPlease enter 2 integer numbers: ";
        if (!(cin >> a >> b)) { // invalid input check
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid numbers! Try again." << endl;
            continue;
        }

        string op;
        cout << "Enter your option (add/subtract/multi/divi/exit): ";
        cin >> op;

        if (op == "exit") {
            cout << "Goodbye!" << endl;
            break;
        }

        printMenu(a, b, op);
    }

    return 0;
}
