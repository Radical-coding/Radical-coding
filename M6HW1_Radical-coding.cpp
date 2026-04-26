/*
CSC 134
M6HW1 - Project Prototype
Radical-coding
04/26/26

AI ASSISTANCE CITATION:
Prompt used: "I need to build my M6HW1 Project Prototype. Please create a C++ text adventure that has three rooms, a note to read for the story, an item to pick up, and a lock-and-key puzzle to reach the ending. Use void functions and a while loop."
AI Used: Google Gemini
*/

#include <iostream>
using namespace std;

// --- Global Variables (Game State) ---
// These are outside of main() so ALL functions can see and change them
int currentRoom = 1;      // Start in room 1
bool hasKey = false;      // Player's inventory
bool gameWon = false;     // Keeps the main loop running

// --- Function Prototypes ---
void welcomeCenter();
void breakRoom();
void vetClinic();

int main() {
    cout << "--- 🐾 NIGHT AT THE SANCTUARY 🐾 ---" << endl;
    cout << "You are the night watchman at the Hidden Wildlife Sanctuary." << endl;
    
    // The Main Game Loop
    while (gameWon == false) {
        if (currentRoom == 1) {
            welcomeCenter();
        } else if (currentRoom == 2) {
            breakRoom();
        } else if (currentRoom == 3) {
            vetClinic();
        }
    }

    cout << "\n*** CONGRATULATIONS! You beat the game! ***" << endl;
    return 0;
}

// --- Function Definitions (The Rooms) ---

void welcomeCenter() {
    int choice;
    cout << "\n--------------------------------------------------" << endl;
    cout << "[LOCATION: Welcome Center]" << endl;
    cout << "You are in the dark lobby. There is a note on the front desk." << endl;
    cout << "To the EAST is the Staff Break Room." << endl;
    cout << "To the NORTH is the Vet Clinic." << endl;
    
    cout << "\nWhat do you want to do?" << endl;
    cout << "1. Read the note on the desk." << endl;
    cout << "2. Go EAST to the Break Room." << endl;
    cout << "3. Go NORTH to the Vet Clinic." << endl;
    cout << "Choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "\n> You read the note: 'URGENT! Buster the puppy is scared and hiding in the Vet Clinic! The door is locked. Find the Silver Key to get in!'" << endl;
    } else if (choice == 2) {
        cout << "\n> You walk down the hallway to the East..." << endl;
        currentRoom = 2; // Changes the state so main() loads the Break Room next
    } else if (choice == 3) {
        cout << "\n> You walk to the heavy clinic door..." << endl;
        currentRoom = 3; 
    } else {
        cout << "\n[Invalid Choice] Try again." << endl;
    }
}

void breakRoom() {
    int choice;
    cout << "\n--------------------------------------------------" << endl;
    cout << "[LOCATION: Staff Break Room]" << endl;
    cout << "It smells like stale coffee. There are lockers here." << endl;
    cout << "To the WEST is the Welcome Center." << endl;
    
    cout << "\nWhat do you want to do?" << endl;
    cout << "1. Search the lockers." << endl;
    cout << "2. Go WEST back to the Welcome Center." << endl;
    cout << "Choice: ";
    cin >> choice;

    if (choice == 1) {
        if (hasKey == false) {
            cout << "\n> You search the lockers and find the SILVER KEY! You put it in your pocket." << endl;
            hasKey = true; // The player now has the key!
        } else {
            cout << "\n> You already searched here. The lockers are empty." << endl;
        }
    } else if (choice == 2) {
        cout << "\n> You head back to the lobby..." << endl;
        currentRoom = 1;
    } else {
        cout << "\n[Invalid Choice] Try again." << endl;
    }
}

void vetClinic() {
    int choice;
    cout << "\n--------------------------------------------------" << endl;
    cout << "[LOCATION: Vet Clinic Door]" << endl;
    
    if (hasKey == false) {
        // The Lock (Player does NOT have the key)
        cout << "The heavy metal door is locked tight. You hear a puppy whimpering inside." << endl;
        cout << "You need a key to get in here." << endl;
        cout << "1. Go SOUTH back to the Welcome Center." << endl;
        cout << "Choice: ";
        cin >> choice;
        
        if (choice == 1) {
            cout << "\n> You head back to the lobby..." << endl;
            currentRoom = 1;
        } else {
            cout << "\n[Invalid Choice] Try again." << endl;
        }
        
    } else {
        // The Unlock & Ending (Player HAS the key)
        cout << "You pull out the Silver Key. It fits perfectly into the lock!" << endl;
        cout << "1. Turn the key and enter." << endl;
        cout << "Choice: ";
        cin >> choice;
        
        if (choice == 1) {
            cout << "\n> *CLICK* The door swings open!" << endl;
            cout << "> You rush inside and find Buster the puppy hiding under a table." << endl;
            cout << "> He wags his tail and runs into your arms. You saved him!" << endl;
            
            // This ends the game loop!
            gameWon = true; 
        } else {
            cout << "\n[Invalid Choice] Try again." << endl;
        }
    }
}