/*
CSC 134
M4T1 - While Loops
Radical-coding
03/24/26
*/

#include <iostream>
#include <iomanip> // 

using namespace std;

int main() {

    // --- Part 1: Simple While Loop (Gaddis Program 5-3)
    // This loop will say "Hello" 5 times.
    cout << "Part 1: Greeting Loop" << endl;
    
    int count = 1;         // Start our counter at 1
    while (count <= 5) {   // Loop runs as long as count is 5 or less
        cout << "Hello number " << count << endl;
        count++;           
    }
    
    cout << endl; 

    // --- Part 2: Table of Squares (Gaddis Program 5-6) 
    // This uses a while loop to print a formatted table.
    cout << "Part 2: Table of Squares" << endl;
    
    const int MIN_NUMBER = 1;   // Starting number
    const int MAX_NUMBER = 10;  // Ending number
    int num = MIN_NUMBER;       // Initialize our counter
    
    // Print the table header
    cout << "Number\tNumber Squared" << endl;
    cout << "-----------------------" << endl;
    
    while (num <= MAX_NUMBER) {
        // Calculate the square and print with a tab (\t) for alignment
        cout << num << "\t" << (num * num) << endl;
        num++; // Increment the counter
    }

    cout << "\nDone!" << endl;
    
    return 0;
}