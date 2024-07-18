#include <iostream>
#include <string>

using namespace std;

int main() {
    int daysLate;
    string bookType;
    double fine;

    // Input from user
    cout << "Enter number of days late: ";
    cin >> daysLate;
    cout << "Enter type of book (regular/children/reference): ";
    cin >> bookType;

    // Determine the fine amount
    if (bookType == "regular") {
        if (daysLate <= 10) {
            fine = daysLate * 0.50;
        } else {
            fine = daysLate * 1.00;
        }
    } else if (bookType == "children") {
        fine = daysLate * 0.25;
    } else if (bookType == "reference") {
        fine = daysLate * 2.00;
    } else {
        cout << "Invalid book type." << endl;
        return 1;
    }

    // Output the result
    cout << "Total fine: $" << fine << endl;

    return 0;
}
