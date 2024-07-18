#include <iostream>

using namespace std;

int main() {
    double accountBalance = 1000.00;  // Example balance
    double withdrawalAmount;
    const double dailyLimit = 500.00; // Example daily limit
    double totalWithdrawnToday = 0.00;

    // Input from user
    cout << "Enter withdrawal amount: ";
    cin >> withdrawalAmount;

    // Check conditions
    if (withdrawalAmount > accountBalance) {
        cout << "Insufficient funds." << endl;
    } else if (withdrawalAmount + totalWithdrawnToday > dailyLimit) {
        cout << "Daily limit exceeded." << endl;
    } else {
        accountBalance -= withdrawalAmount;
        totalWithdrawnToday += withdrawalAmount;
        cout << "Withdrawal successful. New balance: $" << accountBalance << endl;
    }

    return 0;
}
