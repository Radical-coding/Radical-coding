/*
CSC 134
M3HW1 - Gold
Radical-Coding
03/22/26
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    int firstChoice;
    int secondChoice;

    cout << "--- The Lost Kitten Adventure ---" << endl;
    cout << "While walking in the park, you hear a faint meow coming from a thick bush." << endl;
    
    // First Choice: Leads to either Game Over or a second choice
    cout << "Do you:" << endl;
    cout << "1. Ignore the sound and keep walking." << endl;
    cout << "2. Peek into the bush to see what is there." << endl;
    cout << "Enter 1 or 2: ";
    cin >> firstChoice;

    if (firstChoice == 1) {
        // Outcome 1: Game Over 
        cout << "\nYou decide it's probably just the wind. As you walk away, the meowing stops." << endl;
        cout << "GAME OVER: You missed out on a new friend." << endl;
    } 
    else if (firstChoice == 2) {
        // Outcome 2: Leads to a second choice 
        cout << "\nYou peek into the bush and find a tiny, shivering orange kitten!" << endl;
        cout << "It looks hungry and scared. What do you do next?" << endl;
        cout << "1. Try to pick it up immediately." << endl;
        cout << "2. Offer it a small piece of your tuna sandwich first." << endl;
        cout << "Enter 1 or 2: ";
        cin >> secondChoice;

        if (secondChoice == 1) {
            // Second Choice Outcome A: Defeat 
            cout << "\nThe kitten is too scared! It HISES, scratches your hand, and runs away." << endl;
            cout << "DEFEAT: You scared the kitten off." << endl;
        } 
        else if (secondChoice == 2) {
            // Second Choice Outcome B: Victory 
            cout << "\nThe kitten happily eats the tuna and starts purring." << endl;
            cout << "It crawls into your lap and lets you carry it home safely." << endl;
            cout << "VICTORY: You rescued the kitten!" << endl;
        } 
        else {
            cout << "\nInvalid choice. The kitten got bored and wandered away." << endl;
        }
    } 
    else {
        cout << "\nThat wasn't an option. The adventure ends before it begins!" << endl;
    }

    cout << "\nThanks for playing!" << endl;
    return 0;
}