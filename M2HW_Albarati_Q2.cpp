/*
CSC 134
M2HW1 - Gold_Q2
[Your Name]
[Date]
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // New constants based on the prompt
    const double STORAGE_COST = 0.30;   // Updated from 0.23
    const double CUSTOMER_RATE = 0.52;  // Updated from 0.50

    // Variables with unique names
    double l, w, h; 
    double box_volume, production_cost, total_charge, net_profit;

    cout << "--- Question 2: General Crates Pricing Update ---" << endl;

    // Get user input
    cout << "What is the length of the crate? ";
    cin >> l;
    cout << "What is the width? ";
    cin >> w;
    cout << "What is the height? ";
    cin >> h;

    // Calculations
    box_volume = l * w * h;
    production_cost = box_volume * STORAGE_COST;
    total_charge = box_volume * CUSTOMER_RATE;
    net_profit = total_charge - production_cost;

    // Output with the "Suggested Improvement" (2 decimal places)
    cout << fixed << setprecision(2);
    cout << "\nCrate Volume: " << box_volume << " cubic feet" << endl;
    cout << "Cost to Produce:  $" << production_cost << endl;
    cout << "Charge to Client: $" << total_charge << endl;
    cout << "Calculated Profit: $" << net_profit << endl;

    return 0;
}