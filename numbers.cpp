#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    int choice;

    // Input from user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Determine maximum using a switch-case
    choice = (num1 > num2) ? 1 : (num2 > num1) ? 2 : 0;

    switch (choice) {
        case 1:
            cout << "The maximum number is: " << num1 << endl;
            break;
        case 2:
            cout << "The maximum number is: " << num2 << endl;
            break;
        default:
            cout << "Both numbers are equal." << endl;
    }

    return 0;
}
