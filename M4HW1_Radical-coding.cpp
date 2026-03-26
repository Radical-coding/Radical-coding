/*
CSC 134
M4HW1 - Gold
Radical-coding
03/26/26
*/

#include <iostream>

using namespace std;

int main() {
    int userNum;
    int counter = 1; // Used for the multiplication table

    // We ask the user for a number between 1 and 12.
    cout << "Enter a number from 1 to 12 to see its multiplication table: ";
    cin >> userNum;

    // This loop repeats as long as the input is "Invalid" (outside the 1-12 range)
    // Based on Gaddis Program 5-5 logic
    while (userNum < 1 || userNum > 12) {
        cout << "Error: " << userNum << " is not between 1 and 12." << endl;
        cout << "Please enter a valid number (1-12): ";
        cin >> userNum;
    }

    // Once we exit the first loop, we know userNum is valid.
    cout << "\nGenerating the " << userNum << " times table:" << endl;
    cout << "---------------------------------" << endl;

    // Use a while loop to count from 1 up to 12
    while (counter <= 12) {
        // Calculate the answer
        int result = userNum * counter;

        // Print in the required format: "X times Y is Z."
        cout << userNum << " times " << counter << " is " << result << "." << endl;

        // Increment the counter so the loop eventually ends
        counter++;
    }

    cout << "---------------------------------" << endl;
    cout << "Done!" << endl;

    return 0;
}