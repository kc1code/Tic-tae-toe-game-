#include <iostream>
#include <string>
using namespace std;

// Declaring global variables
char space[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };  // Game board
int row, column;
bool tie = false;
char token = 'X';
string n1 = "", n2 = "";

// Function to display the game board
void functionOne() {
    cout << "     |     |     \n";
    cout << "  " << space[0][0] << "  |  " << space[0][1] << "  |  " << space[0][2] << "  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << space[1][0] << "  |  " << space[1][1] << "  |  " << space[1][2] << "  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << space[2][0] << "  |  " << space[2][1] << "  |  " << space[2][2] << "  \n";
    cout << "     |     |     \n";
}

// Function to handle player moves
void functionTwo() {
    int digit;

    // Prompt the current player to enter a position
    if (token == 'X') {
        cout << n1 << ", please enter a position (1-9): ";
    } else {
        cout << n2 << ", please enter a position (1-9): ";
    }
    cin >> digit;

    // Determine the position (row and column) based on the digit entered
    switch (digit) {
        case 1: row = 0; column = 0; break;
        case 2: row = 0; column = 1; break;
        case 3: row = 0; column = 2; break;
        case 4: row = 1; column = 0; break;
        case 5: row = 1; column = 1; break;
        case 6: row = 1; column = 2; break;
        case 7: row = 2; column = 0; break;
        case 8: row = 2; column = 1; break;
        case 9: row = 2; column = 2; break;
        default:
            cout << "Invalid input! Please try again.\n";
            functionTwo();  // Recursive call for a valid input
            return;
    }

    // Place the token if the spot is valid
    if (space[row][column] != 'X' && space[row][column] != '0') {
        space[row][column] = token;
        token = (token == 'X') ? '0' : 'X';  // Toggle token between 'X' and '0'
    } else {
        cout << "The spot is already taken! Please choose another.\n";
        functionTwo();  // Recursive call for a valid move
    }
}

// Function to check for a winner or tie
bool functionThree() {
    // Check rows and columns for a win
    for (int i = 0; i < 3; i++) {
        if ((space[i][0] == space[i][1] && space[i][1] == space[i][2]) || 
            (space[0][i] == space[1][i] && space[1][i] == space[2][i])) {
            return true;
        }
    }

    // Check diagonals for a win
    if ((space[0][0] == space[1][1] && space[1][1] == space[2][2]) || 
        (space[0][2] == space[1][1] && space[1][1] == space[2][0])) {
        return true;
    }

    // Check if the game is still ongoing
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (space[i][j] != 'X' && space[i][j] != '0') {
                return false;
            }
        }
    }

    // If no one wins and the board is full, it's a tie
    tie = true;
    return false;
}

// Main function
int main() {
    cout << "Enter the name of the first player: ";
    getline(cin, n1);
    cout << "Enter the name of the second player: ";
    getline(cin, n2);

    cout << n1 << " is Player 1 (X), so they will play first.\n";
    cout << n2 << " is Player 2 (0), so they will play second.\n";

    // Main game loop
    while (!functionThree()) {
        functionOne();  // Display the board
        functionTwo();  // Handle player move
    }

    // Display the final board
    functionOne();

    // Announce the result
    if (!tie) {
        if (token == 'X') {
            cout << n2 << " wins! Congratulations!\n";
        } else {
            cout << n1 << " wins! Congratulations!\n";
        }
    } else {
        cout << "It's a tie! Well played!\n";
    }

    return 0;
}
