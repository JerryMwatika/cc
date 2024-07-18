#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;
    string movieType;
    double ticketPrice;

    // Input from user
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter type of movie (regular/3D): ";
    cin >> movieType;

    // Determine the ticket price
    if (movieType == "regular") {
        if (age < 12 || age >= 60) {
            ticketPrice = 6.00;
        } else {
            ticketPrice = 10.00;
        }
    } else if (movieType == "3D") {
        if (age < 12 || age >= 60) {
            ticketPrice = 8.00;
        } else {
            ticketPrice = 15.00;
        }
    } else {
        cout << "Invalid movie type." << endl;
        return 1;
    }

    // Output the result
    cout << "Ticket price: $" << ticketPrice << endl;

    return 0;
}
