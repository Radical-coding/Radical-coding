/*
CSC 134
M2HW1 - Gold_Q3
Radical_coding
02/22/26
*/

#include <iostream>

using namespace std;

int main() {
    // Variables named uniquely
    int box_count, slices_per_box, guest_count;
    int total_pizza_slices, slices_needed, leftovers;

    cout << "--- Question 3: Weekend Pizza Party ---" << endl;

    // Conversational input prompts
    cout << "How many pizzas are we ordering? ";
    cin >> box_count;
    
    cout << "How many slices come in each box? ";
    cin >> slices_per_box;
    
    cout << "How many friends are coming over? ";
    cin >> guest_count;

    // The Logic / Math
    total_pizza_slices = box_count * slices_per_box;
    slices_needed = guest_count * 3; // The prompt states 3 slices per visitor
    leftovers = total_pizza_slices - slices_needed;

    // Unique output formatting
    cout << "\n=== Pizza Math ===" << endl;
    cout << "Total slices we have: " << total_pizza_slices << endl;
    cout << "Slices getting eaten: " << slices_needed << endl;
    
    // The final answer required by the prompt
    cout << "Slices left for lunch tomorrow: " << leftovers << endl;
    cout << "==================" << endl;

    return 0;
}