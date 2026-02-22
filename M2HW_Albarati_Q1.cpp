/*
CSC 134
M2HW1 - Gold_Q1
Radical_coding
02/22/26
*/

#include <iostream>
#include <string>
#include <iomanip> // For formatting decimals
#include <cstdlib> // For random number generation
#include <ctime>   // For seeding the random number

using namespace std;

int main() {
    // Variables
    string userName;
    int accountNumber;
    double startingBalance, depositAmount, withdrawalAmount, finalBalance;

    // Seed the random number generator for the account number
    srand(time(0));
    accountNumber = rand() % 90000 + 10000; // Generates a random 5-digit number

    cout << "--- Question 1: Banking Transaction ---" << endl;

    // 1. Ask for User Name (Allowing whitespace)
    cout << "Please enter your full name: ";
    getline(cin, userName);

    // 2. Get financial information
    cout << "Enter your starting account balance: $";
    cin >> startingBalance;

    cout << "Enter the amount of your deposit: $";
    cin >> depositAmount;

    cout << "Enter the amount of your withdrawal: $";
    cin >> withdrawalAmount;

    // 3. Calculate final balance
    finalBalance = startingBalance + depositAmount - withdrawalAmount;

    // 4. Display Results with formatting (2 decimal places)
    cout << "\n----------------------------------------" << endl;
    cout << "Account Summary" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Name on Account:  " << userName << endl;
    cout << "Account Number:   " << accountNumber << endl;
    
    // Formatting the money output
    cout << fixed << setprecision(2);
    cout << "Final Balance:    $" << finalBalance << endl;
    cout << "----------------------------------------" << endl;

    return 0;
}