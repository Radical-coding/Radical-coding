// CSC 134
// M3T1 
// Radical-Coding
// 3/3/2026 
// Ask for the width and length of two rectangles
// Find the area

#include <iostream>
using namespace std;

int main() {

    // Variables
    double len1, wid1, len2, wid2; 
    double area1, area2;

    // Ask user for the length and width of the first rectangle
    cout << "What's the length of the first rectangle? ";
    cin >> len1;
    cout << "What's the width of the first rectangle? ";
    cin >> wid1;
    
    // Ask user for the length and width of the second rectangle
    cout << "What's the length of the second rectangle? ";
    cin >> len2;
    cout << "What's the width of the second rectangle? ";
    cin >> wid2;

    // Find the area (Length * Width)
    area1 = len1 * wid1;
    area2 = len2 * wid2;

    // Print the area
    cout << "\n--- Area Results ---" << endl;
    cout << "The area of the first rectangle is: " << area1 << endl;
    cout << "The area of the second rectangle is: " << area2 << endl;

    return 0;
}