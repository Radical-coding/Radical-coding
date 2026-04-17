/*
CSC 134
M5HW1 - Gold
Radical-coding
04/17/26
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Function Prototypes for Questions 1-5
void question1();
void question2();
void question3();
void question4();
void question5();

int main() {
    int choice = 0;

    // Question 6: Menu Based Program Loop
    while (choice != 6) {
        cout << "\n--- M5HW1 Main Menu ---" << endl;
        cout << "1. Question 1 (Average Rainfall)" << endl;
        cout << "2. Question 2 (Volume of a Block)" << endl;
        cout << "3. Question 3 (Roman Numeral Converter)" << endl;
        cout << "4. Question 4 (Geometry Calculator)" << endl;
        cout << "5. Question 5 (Distance Traveled)" << endl;
        cout << "6. Exit Program" << endl;
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        // Input Validation for Main Menu
        if (choice < 1 || choice > 6) {
            cout << "Invalid choice. Please enter a number from 1 to 6." << endl;
        } 
        else {
            // Call the correct function based on user choice
            switch (choice) {
                case 1: question1(); break;
                case 2: question2(); break;
                case 3: question3(); break;
                case 4: question4(); break;
                case 5: question5(); break;
                case 6: cout << "Exiting program. Goodbye!" << endl; break;
            }
        }
    }

    return 0;
}

// ==========================================
// Question 1: Average Rainfall
// ==========================================
void question1() {
    string m1, m2, m3;
    double r1, r2, r3, average;

    cout << "\n-- Average Rainfall --" << endl;
    cout << "Enter month 1: ";
    cin >> m1;
    cout << "Enter rainfall for " << m1 << ": ";
    cin >> r1;

    cout << "Enter month 2: ";
    cin >> m2;
    cout << "Enter rainfall for " << m2 << ": ";
    cin >> r2;

    cout << "Enter month 3: ";
    cin >> m3;
    cout << "Enter rainfall for " << m3 << ": ";
    cin >> r3;

    average = (r1 + r2 + r3) / 3.0;

    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << m1 << ", " << m2 << ", and " << m3 
         << " is " << average << " inches." << endl;
}

// ==========================================
// Question 2: Volume of a Block
// ==========================================
void question2() {
    double width, length, height, volume;

    cout << "\n-- Volume of a Block --" << endl;
    
    cout << "Enter the width: ";
    cin >> width;
    while (width <= 0) {
        cout << "Width must be greater than zero. Try again: ";
        cin >> width;
    }

    cout << "Enter the length: ";
    cin >> length;
    while (length <= 0) {
        cout << "Length must be greater than zero. Try again: ";
        cin >> length;
    }

    cout << "Enter the height: ";
    cin >> height;
    while (height <= 0) {
        cout << "Height must be greater than zero. Try again: ";
        cin >> height;
    }

    volume = width * length * height;
    cout << "The volume of the block is: " << volume << endl;
}

// ==========================================
// Question 3: Roman Numeral Converter
// ==========================================
void question3() {
    int num;

    cout << "\n-- Roman Numeral Converter --" << endl;
    cout << "Enter a number (1-10): ";
    cin >> num;

    // Input Validation
    while (num < 1 || num > 10) {
        cout << "Invalid input. Please enter a number between 1 and 10: ";
        cin >> num;
    }

    cout << "The Roman numeral version of " << num << " is ";
    switch (num) {
        case 1: cout << "I"; break;
        case 2: cout << "II"; break;
        case 3: cout << "III"; break;
        case 4: cout << "IV"; break;
        case 5: cout << "V"; break;
        case 6: cout << "VI"; break;
        case 7: cout << "VII"; break;
        case 8: cout << "VIII"; break;
        case 9: cout << "IX"; break;
        case 10: cout << "X"; break;
    }
    cout << "." << endl;
}

// ==========================================
// Question 4: Geometry Calculator
// ==========================================
void question4() {
    int choice;
    const double PI = 3.14159;

    cout << "\nGeometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice == 1) {
        double radius;
        cout << "Enter the circle's radius: ";
        cin >> radius;
        if (radius < 0) {
            cout << "The radius cannot be less than zero." << endl;
        } else {
            cout << "The area is " << (PI * radius * radius) << endl;
        }
    } 
    else if (choice == 2) {
        double length, width;
        cout << "Enter the rectangle's length: ";
        cin >> length;
        cout << "Enter the rectangle's width: ";
        cin >> width;
        if (length < 0 || width < 0) {
            cout << "Only enter positive values for length and width." << endl;
        } else {
            cout << "The area is " << (length * width) << endl;
        }
    } 
    else if (choice == 3) {
        double base, height;
        cout << "Enter the triangle's base: ";
        cin >> base;
        cout << "Enter the triangle's height: ";
        cin >> height;
        if (base < 0 || height < 0) {
            cout << "Only enter positive values for base and height." << endl;
        } else {
            cout << "The area is " << (base * height * 0.5) << endl;
        }
    } 
    else if (choice == 4) {
        cout << "Returning to main menu..." << endl;
    } 
    else {
        cout << "The valid choices are 1 through 4. Run the program again and select one of those." << endl;
    }
}

// ==========================================
// Question 5: Distance Traveled
// ==========================================
void question5() {
    double speed;
    int hours;

    cout << "\n-- Distance Traveled --" << endl;
    
    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;
    while (speed < 0) {
        cout << "Speed cannot be negative. Enter a valid speed: ";
        cin >> speed;
    }

    cout << "How many hours has it traveled? ";
    cin >> hours;
    while (hours < 1) {
        cout << "Time traveled must be at least 1 hour. Enter a valid time: ";
        cin >> hours;
    }

    cout << "\nHour\tDistance Traveled" << endl;
    cout << "-------------------------" << endl;
    for (int i = 1; i <= hours; i++) {
        cout << i << "\t" << (speed * i) << endl;
    }
}