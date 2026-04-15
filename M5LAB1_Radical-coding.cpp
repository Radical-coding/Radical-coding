/*
CSC 134
M5LAB1 - Choose Your Own Adventure
Radical-coding
04/15/26
*/

#include <iostream>
using namespace std;

// --- Function Prototypes ---
// These tell the compiler our functions exist
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();

// My two new story branches!
void choice_rescue_dog(); 
void choice_feed_cat();   

// --- Main Function ---
int main() {
    cout << "--- 🐾 THE SECRET ANIMAL SHELTER 🐾 ---" << endl;
    cout << "You hear strange animal noises coming from an abandoned building." << endl;
    
    // Call the menu function to start the game
    main_menu();
    
    cout << "\nThanks for playing!" << endl;
    return 0;
}

// --- Function Definitions ---

// Part 1: The Main Menu with Input Validation
void main_menu() {
    int choice;
    bool isValid = false; // We use this to keep the loop going

    // Keep asking until the user gives a valid answer (1, 2, 3, or 4)
    while (isValid == false) {
        cout << "\nWhat do you want to do?" << endl;
        cout << "1. Walk up to the front door" << endl;
        cout << "2. Sneak around to the back door" << endl;
        cout << "3. Ignore it and go home" << endl;
        cout << "4. Quit Game" << endl;
        cout << "Choose an option (1-4): ";
        cin >> choice;

        if (choice == 1) {
            choice_front_door();
            isValid = true; // Ends the loop
        } 
        else if (choice == 2) {
            choice_back_door();
            isValid = true; 
        } 
        else if (choice == 3) {
            choice_go_home();
            isValid = true; 
        } 
        else if (choice == 4) {
            cout << "You walk away. Game over." << endl;
            isValid = true; 
        } 
        else {
            // If they type 5, 99, etc., the loop repeats!
            cout << "\n[INVALID INPUT] Please type 1, 2, 3, or 4." << endl;
        }
    }
}

// Part 2: Story Functions

void choice_front_door() {
    int action;
    cout << "\nYou open the front door. The lobby is filled with free-roaming pets!" << endl;
    cout << "A sad-looking Golden Retriever walks up to you, but you also hear a kitten meowing loudly." << endl;
    cout << "1. Pet the Golden Retriever." << endl;
    cout << "2. Look for the kitten." << endl;
    cout << "Choice: ";
    cin >> action;

    // This links to our TWO NEW BRANCHES
    if (action == 1) {
        choice_rescue_dog();
    } else {
        choice_feed_cat();
    }
}

void choice_back_door() {
    cout << "\nYou sneak around the back and find an open window." << endl;
    cout << "As you climb in, you accidentally knock over a bucket of treats!" << endl;
    cout << "Instantly, you are swarmed by five fluffy bunnies. You are trapped by cuteness." << endl;
    cout << "VICTORY: You live here now." << endl;
}

void choice_go_home() {
    cout << "\nYou decide it's too risky and walk back to your house." << endl;
    cout << "Later on the news, you see that someone else found a magical petting zoo." << endl;
    cout << "DEFEAT: You missed out!" << endl;
}

// --- My New Story Branches ---

void choice_rescue_dog() {
    cout << "\nYou kneel down and pet the Golden Retriever." << endl;
    cout << "His tail wags so hard his whole body shakes! He leads you to a hidden room filled with toys." << endl;
    cout << "VICTORY: You made a best friend for life!" << endl;
}

void choice_feed_cat() {
    cout << "\nYou follow the meowing and find a tiny orange kitten stuck on a shelf." << endl;
    cout << "You carefully lift it down and give it some cat treats from a nearby jar." << endl;
    cout << "The kitten falls asleep in your arms." << endl;
    cout << "VICTORY: You are the ultimate cat whisperer!" << endl;
}