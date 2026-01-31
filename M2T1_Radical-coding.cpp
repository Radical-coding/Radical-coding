// CSC 134
// M2T1 - Apple Sales 2.0
// Radical-coding
// 01/31/26
// We're going to make the simplest possible
// "checkout" machine
#include <iostream>
using namespace std;


int main() {

    // Set up all Variables
    string first_name, last_name, full_name; // holds customers name
    string product = " apples "; 
    int amount_purchased;
    double cost_each = 0.89;
    double total_cost; 


    // Greet the customer
    cout << "Welcome to our" << product << "Store!" << endl;
    cout << "Whats your first name? ";
    cin >> first_name;
    cout << "Whats your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " << full_name << endl;

    // Ask how much they'd like to purchase 
    cout << "How many" << product << "would you like today? ";
    cin >> amount_purchased;

    total_cost = amount_purchased * cost_each;

    // Calculate total price
    cout << "For " << amount_purchased << " " << product << endl;
    cout << "That will be: $" << total_cost << endl;
    cout << "Thank you for shopping with us!" << endl;



    return 0; // no errors 
   

}