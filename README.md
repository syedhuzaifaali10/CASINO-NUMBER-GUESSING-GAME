# CASINO-NUMBER-GUESSING-GAME
This is a simple C++ console-based game where the player enters their name, deposits some balance, places a bet, and guesses a number between 1 and 10. If the guess is correct, the player wins 10 times the betting amount. Otherwise, the bet amount is deducted from their balance.

Features:
Console-based interactive gameplay
User input for name, balance, bet amount, and guessed number
Random number generation using rand()
Balance management system
Clear display of game rules
Welcome screen with casino-style ASCII art

Technologies Used:
C++ programming language
<windows.h> for Sleep() function
<cstdlib> for random number generation

How to Play:
The game starts by asking the player's name and starting balance.
The player places a bet (must be less than or equal to the current balance).
The player guesses a number between 1 and 10.
If the guessed number matches the randomly generated number, the player wins 10 times the bet.
If the guess is wrong, the bet amount is subtracted from the balance.
The game continues until the player chooses to quit or the balance becomes zero.

Rules:
Choose a number between 1 and 10.
A correct guess gives 10x the betting amount.
A wrong guess deducts the bet from your balance.
If balance becomes zero, the game ends.

Example Output:
========WELCOME TO CASINO WORLD=======

What's your Name: Ali
Enter the starting balance to play the game: Rs. 1000
Hey Ali, enter the amount you want to bet: Rs. 100
Guess any betting number between 1 & 10: 7
You are in luck!! You have won Rs. 1000
The winning number was: 7
Ali, you now have a balance of Rs. 1900
Do you want to play again (y/n)?

