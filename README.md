# Tic-tac-toe-Game
This C++ program is a console-based implementation of the popular game "Tic Tac Toe" for two players. The code provides a simple text-based interface for players to take turns and compete in the game. Here's a description of the main components and functionality of this code:

Initialization and Setup:

The program begins by initializing variables, including player names, scores, and the game board (represented as an array of characters).
It also sets the color of the console text to light yellow (E4) for a visually appealing display.
Displaying Game Title and Instructions:

The program displays a title ("Tic Tac Toe") and instructions to the players using various cout statements.
It uses the system("pause") and system("CLS") commands to control the flow and clear the console screen between different sections of the game.
Player Names Input:

It prompts both players to enter their names using cin and stores them in the name array.
Game Loop:

The core of the game is a while loop that allows players to take turns until a game ends or the players choose to exit.
Inside the loop, it displays the current state of the game board, prompting the active player to make a move.
Players input their move choices (1-9) for the position they want to mark with their symbol ('X' for Player 1 and 'O' for Player 2).
The code validates the move and updates the game board accordingly.
After each move, it checks for winning conditions by examining rows, columns, and diagonals. If a player wins, it displays the winner and updates their score.
Game Statistics:

After each game, the code displays a scorecard, including the total number of games played and the number of games won by each player.
Play Again Option:

The code prompts players to play another round by pressing 'Y' or 'y' or exit the game by pressing any other key.
If players choose to play again, the game board is reset for a new round.
Program Conclusion:

After the players decide to exit the game, the code displays a closing message, thanking the players for using it and providing the name of the developer (M.Samiullah).
Overall, this program provides a text-based interactive experience for playing Tic Tac Toe between two players, keeping track of their scores and allowing them to continue playing as many rounds as they like.
