/*
CSC 134
M2LAB -Crate Case Study
Radical-coding
02/22/26
*/

#include <iostream>
#include <iomanip> // Needed for formatting output
using namespace std;

int main() {
    // 1. Define constants for the costs and charges
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;

    // 2. find variables for dimensions and calculations
    double length, width, height;
    double volume, cost, charge, profit;

    // 3. Get the crate's dimensions from the user
    cout << "Enter the dimensions of the crate (in feet):\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    // 4. Perform calculations
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    // 5. Display the results with formatting
    cout << fixed << setprecision(2); // Formats output to 2 decimal places
    cout << "The volume of the crate is " << volume << " cubic feet.\n";
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;

    return 0;
}