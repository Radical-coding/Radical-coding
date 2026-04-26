/*
CSC 134
M6T1 - Basic Arrays
Radical - Coding
04/26/26
*/

#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

void part1();
void part2();

int main() {
    cout << "--- M6T1: Part 1 (Without Arrays) ---" << endl;
    part1();

    cout << "\n--- M6T1: Part 2 (With Arrays and ASCII Graph) ---" << endl;
    part2();

    cout << "\nProgram complete." << endl;
    return 0;
}

// Part 1: Loop without arrays
void part1() {
    int totalCars = 0;
    int dailyCars;
    double average;

    // Loop 5 times for Monday-Friday
    for (int day = 1; day <= 5; day++) {
        cout << "How many cars passed the site on day " << day << "? ";
        cin >> dailyCars;
        totalCars += dailyCars; 
    }

    // Calculate average
    average = (double)totalCars / 5.0;

    cout << "\nPart 1 Results:" << endl;
    cout << "Total cars for the week: " << totalCars << endl;
    cout << "Average cars per day: " << average << endl;
}

// Part 2: Loop with arrays and a graph

void part2() {
    const int NUM_DAYS = 5;
    int cars[NUM_DAYS]; // This is the array! It holds 5 separate integers.
    string days[NUM_DAYS] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    
    int totalCars = 0;
    double average;

    // 1. Gather the data and store it in the array
    for (int i = 0; i < NUM_DAYS; i++) {
        cout << "How many cars passed the site on " << days[i] << "? ";
        cin >> cars[i]; // Store the input in the specific slot for that day
        totalCars += cars[i]; 
    }

    // Calculate average
    average = (double)totalCars / NUM_DAYS;

    cout << "\nPart 2 Results:" << endl;
    cout << "Total cars for the week: " << totalCars << endl;
    cout << "Average cars per day: " << average << endl;

    // 2. Print the ASCII Graph
    cout << "\n--- Daily Car Graph ---" << endl;
    for (int i = 0; i < NUM_DAYS; i++) {
        
        // NEW FIX: Force every line to be aligned to the left in a 12-character box
        cout << left << setw(12) << days[i] + ":"; 
        
        // Print a star (*) for every car that passed that day
        for (int j = 0; j < cars[i]; j++) {
            cout << "*";
        }
        cout << endl; 
    }
}