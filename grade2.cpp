#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName;
    string course;
    int score;

    // Input from user
    cout << "Enter full name: ";
    getline(cin, fullName);
    cout << "Enter course: ";
    getline(cin, course);
    cout << "Enter score: ";
    cin >> score;

    string grade;

    // Determining grade using switch-case
    switch (score / 10) {
        case 10:
        case 9:
        case 8:
        case 7:
            grade = "A";
            break;
        case 6:
            grade = "B";
            break;
        case 5:
            grade = "C";
            break;
        case 4:
            grade = "D";
            break;
        default:
            grade = (score < 40) ? "F" : "Invalid score";
    }

    // Output the result
    cout << "Student Name: " << fullName << endl;
    cout << "Course: " << course << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
