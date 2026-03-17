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
   