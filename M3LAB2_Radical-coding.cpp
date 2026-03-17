// CSC 134 
// M3LAB2 Number Grade to Letter Grade Conversion
// Radical-coding
// 03/18/26

#include <iostream>

using namespace std;

int main() {
    // Declare a variable to store the numerical grade entered by the user
    int grade;

    // Prompt the user to enter their numerical grade
    cout << "Enter your numerical grade: ";
    cin >> grade;

    // Determine the letter grade using if-else statements and Boolean AND "&&"
    if (grade >= 90 && grade <= 100) {
        cout << "Your letter grade is: A" << endl;
    } 
    else if (grade >= 80 && grade <= 89) {
        cout << "Your letter grade is: B" << endl;
    } 
    else if (grade >= 70 && grade <= 79) {
        cout << "Your letter grade is: C" << endl;
    } 
    else if (grade >= 60 && grade <= 69) {
        cout << "Your letter grade is: D" << endl;
    } 
    else if (grade >= 0 && grade <= 59) {
        cout << "Your letter grade is: F" << endl;
    } 
    else {
        // Handle edge cases outside the standard 0-100 range
        cout << "Invalid grade entered. Please restart and enter a number between 0 and 100." << endl;
    }

    // End the program
    return 0;
}