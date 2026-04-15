/*
CSC 134
M5T2 - Table of Squares
[Your Name]
[Date]
*/

#include <iostream>
#include <iomanip>

using namespace std;

// --- Function Prototypes ---
int square(int num);                 // Value-returning function
void printAnswerLine(int num, int sq); // Void function

int main() {
    // The main function will use a loop to count from 1 to 10
    cout << "Number\tSquare" << endl;
    cout << "----------------" << endl;

    int i = 1;
    while (i <= 10) {
        // 1. Call the value-returning function to get the square
        int result = square(i);

        // 2. Call the void function to print the line
        printAnswerLine(i, result);

        i++; // Increment counter
    }

    return 0;
}

// --- Function Definitions ---

// Takes an int and returns the square of that int
int square(int num) {
    return num * num;
}

// Prints one line of the table
void printAnswerLine(int num, int sq) {
    cout << num << "\t" << sq << endl;
}