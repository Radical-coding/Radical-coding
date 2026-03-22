/*
CSC 134
M3HW1 - Gold_Q1
Radical-Coding
03/22/26
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Variable to store the user's response
    string response;

    // Introduction from the program
    cout << "Hello, I'm a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;
    
    // Get the user's input
    // Note: Using cin for a single word response
    cin >> response;

    // Use if statements to provide different behaviors based on input
    if (response == "yes") {
        // Sample Run 1 outcome
        cout << "That's great! I'm sure we'll get along." << endl;
    } 
    else if (response == "no") {
        // Sample Run 2 outcome
        cout << "Well, maybe you'll learn to like me later." << endl;
    } 
    else {
        // Sample Run 3 outcome (any other input)
        cout << "If you're not sure... that's OK." << endl;
    }

    return 0;
}