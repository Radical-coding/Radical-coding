// CSC 134
// Radiacl-coding
// M3T2
// 03/08/2026
// C++

#include <iostream>
#include <cmath>    
#include <ctime>
using namespace std;

int main() {
    cout << "Let's play craps!" << endl;
    
    // Seed the RNG
    int seed = time(0);
    srand(seed);

    const int MAX = 6; // numbers from 1-6
    int roll1, roll2, total;
    
    // First Roll (The Come Out Roll)
    roll1  = (rand() % MAX) + 1; 
    roll2  = (rand() % MAX) + 1; 
    total = roll1 + roll2;
    
    cout << "You rolled: " << roll1 << " + " << roll2 << " = " << total << endl;

    // Check win/loss for the first roll
    if (total == 7 || total == 11) {
        cout << "Winner winner! You win!" << endl;
    }
    else if (total == 2 || total == 3 || total == 12) {
        cout << "Craps! Too bad, you lose." << endl;
    }
    else {
        // The Point Phase
        int point = total;
        cout << "Your point is " << point << ". Let's keep rolling!" << endl;
        
        bool keepRolling = true;
        
        // Loop until they roll their point or a 7
        while (keepRolling) {
            // Roll the dice again
            roll1 = (rand() % MAX) + 1;
            roll2 = (rand() % MAX) + 1;
            total = roll1 + roll2;
            
            cout << "You rolled: " << total << endl;
            
            if (total == point) {
                cout << "You hit your point! You win!" << endl;
                keepRolling = false; // End the loop
            }
            else if (total == 7) {
                cout << "Seven out! You lose." << endl;
                keepRolling = false; // End the loop
            }
            // If it's neither the point nor a 7, the loop continues automatically
        }
    }

    return 0;
}