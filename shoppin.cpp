#include <iostream>

using namespace std;

int main() {
    double purchaseAmount;
    double discount = 0.0;

    // Input from user
    cout << "Enter purchase amount: ";
    cin >> purchaseAmount;

    // Determine the discount
    if (purchaseAmount >= 1000) {
        discount = 0.20;
    } else if (purchaseAmount >= 500) {
        discount = 0.10;
    } else if (purchaseAmount >= 100) {
        discount = 0.05;
    }

    // Calculate total cost after discount
    double totalCost = purchaseAmount - (purchaseAmount * discount);

    // Output the result
    cout << "Total cost after discount: $" << totalCost << endl;

    return 0;
}
