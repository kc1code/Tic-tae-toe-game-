# Tic-Tac-Toe Game 🎮

A simple two-player Tic-Tac-Toe game implemented in C++, allowing players to compete on a 3x3 board. 
The project is an excellent demonstration of fundamental programming concepts like control structures, functions, and input validation.

## Features ✨
1. Two-player mode with customizable player names.
2. Clear and interactive game board display.
3. Input validation to ensure valid moves.
4. Automatic detection of game outcomes: win, tie, or ongoing.
5. Supports a 3x3 grid with classic Tic-Tac-Toe rules.

## How to Play 🕹️

**Setup:**
1. Player 1 uses symbol X.
2. Player 2 uses symbol 0.
3. Players take turns entering a position number (1-9) corresponding to an empty spot on the board.

**The program:**
1. Updates the board after each valid move.
2. Checks for a winner or a tie after every move.

**The game ends when:**
1. A player aligns 3 of their symbols in a row, column, or diagonal.
2. All positions are filled without a winner (tie).
3. The winner (or tie) is announced, and the final board is displayed.

**How to Run 🚀**
* Clone or download the repository to your local machine.
* Open a terminal or IDE with C++ support.
* Compile the program using a C++ compiler. For example:

bash
Copy code
g++ -o tic_tac_toe tic_tac_toe.cpp

Run the compiled file:
bash
Copy code
./tic_tac_toe

**Project Structure 🗂️**
bash
Copy code
.
├── tic_tac_toe.cpp   # Main source code file
├── README.md         # Project documentation

**Example:**
Enter the name of the first player: Alice
Enter the name of the second player: Bob
Alice is Player 1 (X), so they will play first.
Bob is Player 2 (0), so they will play second.

     |     |     
  1  |  2  |  3  
_____|_____|_____
     |     |     
  4  |  5  |  6  
_____|_____|_____
     |     |     
  7  |  8  |  9  
     |     |     
Alice, please enter a position (1-9): 5

     |     |     
  1  |  2  |  3  
_____|_____|_____
     |     |     
  4  |  X  |  6  
_____|_____|_____
     |     |     
  7  |  8  |  9  
     |     |     
Bob, please enter a position (1-9): 1


**Improvements & Future Features 🔮**
1. Add a single-player mode with AI.
2. Enhance the user interface with colors for better readability.
3. Implement replay functionality after a game ends.
4. Expand the board size (e.g., 4x4 or 5x5) for a new challenge.

**Contributing 🤝**
Contributions are welcome! Feel free to fork this repository, make changes, and submit a pull request.

License 📝
This project is licensed under the Apachae License. See the LICENSE file for details.
