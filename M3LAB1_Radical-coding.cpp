// 03/17/26
// Radical - Coding
// CSC-134
// Space Explorer Game
// M3LAB1 Assignment

#include <iostream>
using namespace std;

void touchArtifact();
void scanArtifact();

// beginning of the main() method
int main() {
    
    // declare the variable we need
    int choice;

    // ask the question
    cout << "You discover a glowing, humming alien artifact on Mars." << endl;
    cout << "Do you:" << endl;
    cout << "1. Touch the artifact with your space-glove." << endl;
    cout << "2. Scan it with your science equipment from a safe distance." << endl;
    cout << "Type 1 or 2: "; 
    
    // get user input
    cin >> choice;

    // using if, make a decision based on the user's choice
    if (1 == choice) {
        touchArtifact();
    }
    else if (2 == choice) {
        scanArtifact();
    }
    else {
        cout << "You hesitated, and the artifact vanished into thin air. Invalid choice!" << endl;
    }

    cout << "Thank you for playing Space Explorer!" << endl;
    
    // exit without error
    return 0;

} // end of the main() method

////
// After main(), we define all our other functions.
////

void touchArtifact() {
    // this function is called in main if the user chooses 1.
    cout << "You reach out and touch the artifact..." << endl;
    cout << "ZAP! You have been teleported to the Andromeda Galaxy!" << endl;
}

void scanArtifact() {
    // this function is called in main if the user chooses 2.
    cout << "You pull out your scanner and analyze the artifact..." << endl;
    cout << "Fascinating! You discovered a brand new element and won the Nobel Prize." << endl;
}