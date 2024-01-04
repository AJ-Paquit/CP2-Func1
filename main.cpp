// Programming Activity January 4, 2023

#include <iostream>

using namespace std;

int main() {
    int num1, num2, choice, exit;

    cout << "Welcome! Press the following to continue: \n";

    cout << "\n[1] Add numbers      [2] Subtract numbers\n";
    cout << "\n[3] Multiply numbers [4] Divide numbers\n\n";

    while (!(cin >> choice) || choice < 1 || choice > 4) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        system("cls");
        cout << "Invalid input. Please enter a valid choice (1-4): ";
    }

    cout << "Enter the first number: ";
    while (!(cin >> num1)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        system("cls");
        cout << "Invalid input. Please enter a valid number: ";
    }


    cout << "Enter the second number: ";
    while (!(cin >> num2)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        system("cls");
        cout << "Invalid input. Please enter a valid number: ";
    }



    system("cls");

    switch (choice) {
    case 1:
        cout << "\n\nThe sum between " << num1 << " and " << num2 << " is " << num1 + num2 << ".\n\n";
        break;
    case 2:
        cout << "\n\nThe difference between " << num1 << " and " << num2 << " is " << num1 - num2 << ".\n\n";
        break;
    case 3:
        cout << "\n\nThe product between " << num1 << " and " << num2 << " is " << num1 * num2 << ".\n\n";
        break;
    case 4:
        if (num2 != 0) {
            cout << "\n\nThe quotient between " << num1 << " and " << num2 << " is " << num1 / num2 << ".\n\n";
        }
        else {
            cout << "\n\nError: Cannot divide by zero.\n\n";
        }
        break;
    default:
        cout << "\n\nInvalid input. \n\n";
        break;
    }

    cout << "Do you want to continue? [1] to continue [2] to exit\n";
    while (!(cin >> exit)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nInvalid input. Please enter a valid number: ";
    }
        switch (exit) {
        case 1:
            system("cls");
            main();
            break;
        case 2:
            system("cls");
            cout << "Have a nice day!\n\n";
            break;
        }

        return 0;
    }

