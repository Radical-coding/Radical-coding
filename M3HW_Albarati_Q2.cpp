/*
CSC 134
M3HW1 - Gold_Q2
Radical-Coding
03/22/26
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // Variables from M2T2 plus new ones for this assignment
    double meal_price;
    double tax_percent = 0.08; // 8% tax
    double tax_amount;
    double tip_amount = 0.00;  // Default to 0 unless dine-in
    double total;
    int order_type;            // 1 for dine-in, 2 for takeaway

    // Set up decimal formatting for money
    cout << fixed << setprecision(2);

    // 1. Ask the user for the price of the meal
    cout << "Enter the price of the meal: ";
    cin >> meal_price;

    // 2. Ask if the order is dine in or takeaway
    cout << "Please enter 1 if the order is dine in, 2 if it is to go: ";
    cin >> order_type;

    // 3. Calculate tax (8% of meal price)
    tax_amount = meal_price * tax_percent;

    // 4. Logic for the tip: If dine in (1), add a 15% tip
    if (order_type == 1) {
        tip_amount = meal_price * 0.15;
    } 
    // If it's to go (2), tip stays at 0.00 as initialized

    // 5. Calculate total
    total = meal_price + tax_amount + tip_amount;

    // 6. Print the formatted receipt
    cout << "\n--- CSC 134 Restaurant Receipt ---" << endl;
    cout << "Meal Price:  $" << meal_price << endl;
    cout << "Tax (8%):    $" << tax_amount << endl;

    // Only show the tip line if it's a dine-in order
    if (order_type == 1) {
        cout << "Tip (15%):   $" << tip_amount << endl;
    }

    cout << "----------------------------------" << endl;
    cout << "Total Due:   $" << total << endl;
    cout << "Thank you for your order!" << endl;

    return 0;
}