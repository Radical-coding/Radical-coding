/*
CSC 134
M5LAB2 - Complete a Program (Area Rectangle)
Radical-coding
04/15/26
*/

#include <iostream>
using namespace std;

// --- Function Prototypes ---
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main() {
    // Variables to hold the rectangle's data
    double length, width, area;

    // Call the functions to get the length and width
    length = getLength();
    width = getWidth();

    // Call the function to calculate the area
    area = getArea(length, width);

    // Call the function to display the data
    displayData(length, width, area);

    return 0;
}

// --- Function Definitions ---

// getLength: Asks the user to enter the length and returns it as a double.
double getLength() {
    double l;
    cout << "Enter the rectangle's length: ";
    cin >> l;
    return l;
}

// getWidth: Asks the user to enter the width and returns it as a double.
double getWidth() {
    double w;
    cout << "Enter the rectangle's width: ";
    cin >> w;
    return w;
}

// getArea: Takes length and width as arguments, calculates area, and returns it.
double getArea(double length, double width) {
    return length * width;
}

// displayData: Takes length, width, and area, and displays them formatted.
void displayData(double length, double width, double area) {
    cout << "\n--- Rectangle Data ---" << endl;
    cout << "Length: \t" << length << endl;
    cout << "Width:  \t" << width << endl;
    cout << "Area:   \t" << area << endl;
    cout << "----------------------" << endl;
}