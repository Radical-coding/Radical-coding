/*
CSC 134
M2HW1 - Gold_Q4
Radical_coding
02/22/26
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declaring strictly the variables allowed by the Bonus constraints
    string letsGo, school, team, cheerOne, cheerTwo;

    // Assigning our text to the variables first
    letsGo = "Let's go ";
    school = "FTCC";
    team = "Trojans";

    // Bonus Requirement C: Using string concatenation (+) to build the cheers
    cheerOne = letsGo + school;
    cheerTwo = letsGo + team;

    // Bonus Requirement A: No raw strings in the cout statements!
    // Notice there are no quotation marks anywhere in the cout lines below.
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;

    return 0;
}