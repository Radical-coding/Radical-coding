/*
CSC 134
M5T1 - Basic Functions
Radical-coding
04/15/26
*/

#include <iostream>
#include <string>

using namespace std;

// --- Function Declarations (Prototypes) ---
// These tell the compiler that these functions exist below main()
string formatAnswer(int answer);
void printAnswer(string msg);


int main() {
    int answer = 5;
    string message;

    // 1. Call the value-returning function.
    // It takes the number 5, formats it into a sentence, 
    // and "returns" that sentence to be stored in the 'message' variable.
    message = formatAnswer(answer);

    // 2. Call the void function.
    // It takes the 'message' variable and prints it. It doesn't return anything.
    printAnswer(message);

    return 0;
}


// --- Function Definitions ---
// This is where we write what the functions actually do.

string formatAnswer(int answer) {
    // Make a nice looking string containing the answer
    string answerMessage;
    
    answerMessage = "The answer is ";
    // to_string() converts the integer number into text so it can be added to the string
    answerMessage += to_string(answer); 
    
    return answerMessage;
}

void printAnswer(string msg) {
    // display our message
    cout << msg << endl;
}