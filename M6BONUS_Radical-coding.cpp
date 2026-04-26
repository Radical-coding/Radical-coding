/*
CSC 134
M6BONUS1 - Text Adventure
Radical-coding
04/26/26

AI ASSISTANCE CITATION:
Prompt used: "I need to complete the M6BONUS1 text adventure assignment. Please take the starter code and change the room names, descriptions, and layout to be about an animal sanctuary, keeping the enums and parallel arrays intact."
AI Used: Google Gemini
*/

#include <iostream>
#include <string>
using namespace std;

// Define constants for directions
enum Direction {
    NORTH = 0,
    EAST = 1,
    SOUTH = 2,
    WEST = 3,
    NUM_DIRECTIONS = 4
};

// Direction strings for output
const string DIRECTION_NAMES[NUM_DIRECTIONS] = {
    "north", "east", "south", "west"
};

// Define constants for the new Animal Sanctuary rooms
enum Room {
    WELCOME_CENTER = 0,
    DOG_YARD = 1,
    CAT_CAFE = 2,
    CLINIC = 3,
    BUNNY_PATCH = 4,
    NUM_ROOMS = 5
};

int main() {
    // Room names array (Parallel Array 1)
    string roomNames[NUM_ROOMS] = {
        "Welcome Center",
        "Dog Play Yard",
        "Cozy Cat Cafe",
        "Veterinary Clinic",
        "Bunny Patch"
    };
    
    // Room descriptions array (Parallel Array 2)
    string roomDescriptions[NUM_ROOMS] = {
        "A bright reception area filled with photos of rescued animals. You hear barking to the north.",
        "A massive grassy yard littered with tennis balls. A Golden Retriever drops a toy at your feet.",
        "A warm room filled with climbing trees and scratching posts. Kittens are sleeping everywhere.",
        "A spotless, quiet room with medical tables where injured wildlife gets treated.",
        "A peaceful enclosed garden. Fluffy rabbits are happily munching on fresh carrots."
    };
    
    // Adjacency list using a 2D array
    // connections[from_room][direction] = to_room or -1 if no connection
    int connections[NUM_ROOMS][NUM_DIRECTIONS];
    
    // Initialize all connections to -1 (no connection)
    for (int i = 0; i < NUM_ROOMS; i++) {
        for (int j = 0; j < NUM_DIRECTIONS; j++) {
            connections[i][j] = -1;
        }
    }
    
    // Define the map connections for the Sanctuary
    
    // 0. Welcome Center connections
    connections[WELCOME_CENTER][NORTH] = DOG_YARD;    // North -> Dog Yard
    connections[WELCOME_CENTER][EAST] = CAT_CAFE;     // East -> Cat Cafe
    connections[WELCOME_CENTER][SOUTH] = -1;          // Locked front door
    connections[WELCOME_CENTER][WEST] = CLINIC;       // West -> Clinic
    
    // 1. Dog Yard connections
    connections[DOG_YARD][NORTH] = -1;                // Fence
    connections[DOG_YARD][EAST] = -1;                 // Fence
    connections[DOG_YARD][SOUTH] = WELCOME_CENTER;    // South -> Welcome Center
    connections[DOG_YARD][WEST] = -1;                 // Fence
    
    // 2. Cat Cafe connections
    connections[CAT_CAFE][NORTH] = -1;                // Wall
    connections[CAT_CAFE][EAST] = -1;                 // Wall
    connections[CAT_CAFE][SOUTH] = BUNNY_PATCH;       // South -> Bunny Patch
    connections[CAT_CAFE][WEST] = WELCOME_CENTER;     // West -> Welcome Center
    
    // 3. Clinic connections
    connections[CLINIC][NORTH] = -1;                  // Wall
    connections[CLINIC][EAST] = WELCOME_CENTER;       // East -> Welcome Center
    connections[CLINIC][SOUTH] = -1;                  // Wall
    connections[CLINIC][WEST] = -1;                   // Wall
    
    // 4. Bunny Patch connections
    connections[BUNNY_PATCH][NORTH] = CAT_CAFE;       // North -> Cat Cafe
    connections[BUNNY_PATCH][EAST] = -1;              // Fence
    connections[BUNNY_PATCH][SOUTH] = -1;             // Fence
    connections[BUNNY_PATCH][WEST] = -1;              // Fence
    
    // Game state
    int currentRoom = WELCOME_CENTER; // Start in the Welcome Center
    bool gameRunning = true;
    
    // Game loop
    while (gameRunning) {
        // Display current room information
        cout << "\n--------------------------------------------------" << endl;
        cout << "Location: " << roomNames[currentRoom] << endl;
        cout << roomDescriptions[currentRoom] << endl;
        
        // Show available exits
        cout << "Exits: ";
        bool hasExits = false;
        for (int dir = 0; dir < NUM_DIRECTIONS; dir++) {
            if (connections[currentRoom][dir] != -1) {
                cout << DIRECTION_NAMES[dir] << " ";
                hasExits = true;
            }
        }
        if (!hasExits) {
            cout << "none";
        }
        cout << "\n--------------------------------------------------" << endl;
        
        // Get player input
        string command;
        cout << "What would you like to do? (n/e/s/w or quit): ";
        cin >> command;
        
        // Process movement commands
        if (command == "north" || command == "n") {
            if (connections[currentRoom][NORTH] != -1) {
                currentRoom = connections[currentRoom][NORTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "east" || command == "e") {
            if (connections[currentRoom][EAST] != -1) {
                currentRoom = connections[currentRoom][EAST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "south" || command == "s") {
            if (connections[currentRoom][SOUTH] != -1) {
                currentRoom = connections[currentRoom][SOUTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "west" || command == "w") {
            if (connections[currentRoom][WEST] != -1) {
                currentRoom = connections[currentRoom][WEST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "quit" || command == "q") {
            gameRunning = false;
        } else {
            cout << "I don't understand that command." << endl;
        }
    }
    
    cout << "\nThanks for visiting the Wildlife Sanctuary!" << endl;
    return 0;
}