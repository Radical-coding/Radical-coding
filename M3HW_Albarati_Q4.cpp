/*
CSC 134
M3HW1 - Gold
Radical-coding
03/22/26
*/

#include <iostream>
#include <cstdlib> // Required for rand() and srand()
#include <ctime>   // Required for time()

using namespace std;

int main() {
    // 1. Seed the random number generator using the current time
    srand(time(0));

    // 2. Generate two random single-digit numbers (0-9)
    int num1 = rand() % 10;
    int num2 = rand() % 10;
    int correctAnswer = num1 + num2;
    int userAnswer;

    // 3. Print out the numbers as a simple addition problem
    cout << "--- Math Practice ---" << endl;
    cout << "What is " << num1 << " plus " << num2 << "?" << endl;

    // 4. Ask the user to enter the answer
    cout << "Enter your answer: ";
    cin >> userAnswer;

    // 5. Use an if statement to tell the user if they are correct
    if (userAnswer == correctAnswer) {
        cout << "Correct! Well done." << endl;
    } 
    else {
        cout << "Incorrect." << endl;
        cout << "The correct answer was " << correctAnswer << "." << endl;
    }

    return 0;
}