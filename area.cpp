#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;
    double area;

    do {
        // Display menu
        cout << "Menu:" << endl;
        cout << "1. Calculate the area of a circle" << endl;
        cout << "2. Calculate the area of a rectangle" << endl;
        cout << "3. Calculate the area of a triangle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double radius;
                cout << "Enter radius of the circle: ";
                cin >> radius;
                area = M_PI * radius * radius;
                cout << "Area of the circle: " << area << endl;
                break;
            }
            case 2: {
                double length, width;
                cout << "Enter length and width of the rectangle: ";
                cin >> length >> width;
                area = length * width;
                cout << "Area of the rectangle: " << area << endl;
                break;
            }
            case 3: {
                double base, height;
                cout << "Enter base and height of the triangle: ";
                cin >> base >> height;
                area = 0.5 * base * height;
                cout << "Area of the triangle: " << area << endl;
                break;
            }
            case 4:
                cout << "Quitting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
