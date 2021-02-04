#include <iostream>

// Player 1's token to be placed on board after choice is made
char xCoin = 'X';

// Player 2's token to be placed on board after choice is made
char yCoin = 'O';

// A variable that is used to get player 1's decision from inputs
char player1 = ' ';

// A variable that is used to get player 1's decision from inputs
char player2 = ' ';

// Makes the board array and sets the numbers to be shown when board is displayed
char Board[3][3] =
{ { '1', '2', '3'},
{'4', '5', '6'},
{'7', '8', '9'} };

// An array of characters to hold player 1's name
char Name0[8];

// An array of characters to hold player 2's name
char Name1[8];

// A set of ints that helps determine which player wins in their functions by checking the number each is set to
int a1;
int b1;
int c1;
int a2;
int b2;
int c2;
int a3;
int b3;
int c3;


// A variable that checks if the gameover is set to true or false 
bool _gameOver = false;

// A function used to get player 1's input and set to equal its variable and return!
char getInput() 
{
	std::cout << Name0 << ": You are first pick a number from 1 to 9 to place an X" << std::endl;
	std::cin >> player1;
	return player1;
}

// A function used to get player 2's input and set to equal its variable and return!
char getInput2()
{
	std::cout << Name1 << ": You are first pick a number from 1 to 9 to place an X" << std::endl;
	std::cin >> player2;
	return player2;
}


// A function that uses the multiple int variables to check if each is set to equal 1 in a certain order
// to determine if player 1 wins, if not the function returns false and game continues
bool Player1Wins() 
{
	// a nested if statement to check the first column
	if (a1 == 1)
		if (a2 == 1)
			if (a3 == 1)
			{
				_gameOver = true; return true;
			}

	// a nested if statement to check the second column
	if (b1 == 1)
		if (b2 == 1)
			if (b3 == 1)
			{
				_gameOver = true; return true;
			}

	// a nested if statement to check the third column
	if (c1 == 1)
		if (c2 == 1)
			if (c3 == 1)
			{
				_gameOver = true; return true;
			}

	// a if statement to check diagonal left to right
	if (a1 == 1)
		if (b2 == 1)
			if (c3 == 1)
			{
				_gameOver = true; return true;
			}

	// a if statement that checks diagonal right to left
	if (c1 == 1)
		if (b2 == 1)
			if (a3 == 1)
			{
				_gameOver = true; return true;
			}

	return false;
}

// A function that uses the multiple int variables to check if each is set to equal 2 in a certain order
// to determine if player 2 wins, if not the function returns false and game continues
bool player2Wins() 
{
	// a nested if statement to check the first column
	if (a1 == 2)
		if (a2 == 2)
			if (a3 == 2)
			{
				_gameOver = true; return true;
			}
				
	// a nested if statement to check the second column
	if (b1 == 2)
		if (b2 == 2)
			if (b3 == 2)
			{
				_gameOver = true; return true;
			}

	// a nested if statement to check the third column
	if (c1 == 2)
		if (c2 == 2)
			if (c3 == 2)
			{
				_gameOver = true; return true;
			}

	// a if statement to check diagonal left to right
	if (a1 == 2)
		if (b2 == 2)
			if (c3 == 2)
			{
				_gameOver = true; return true;
			}

	// a if statement that checks diagonal right to left
	if (c1 == 2)
		if (b2 == 2)
			if (a3 == 2)
			{
				_gameOver = true; return true;
			}

	return false;
	
}

// A function that is used to set a player1 token in a slot chosen from the input, as well
// as set the correesponding int variable to equal 1 to state that player 1 has this spot!
void UpdatePlayer1Board()
{
	// sets the top left to be a X
	if (player1 == '1')
	{
		Board[0][0] = xCoin; a1 = 1;
	}

	// sets the top middle to be a X
	else if (player1 == '2')
	{
		Board[0][1] = xCoin; b2 = 1;
	}

	// sets the top right to be a X
	else if (player1 == '3')
	{
		Board[0][2] = xCoin; c3 = 1;
	}

	// sets the middle left to be a X
	else if (player1 == '4')
	{
		Board[1][0] = xCoin; a2 = 1;
	}

	// sets the middle to be a X
	else if (player1 == '5')
	{
		Board[1][1] = xCoin; b2 = 1;
	}

	// sets the middle right to be a X
	else if (player1 == '6')
	{
		Board[1][2] = xCoin; c2 = 1;
	}

	// sets the bottom left to be a X
	else if (player1 == '7')
	{
		Board[2][0] = xCoin; a3 = 1;
	}

	// sets the bottom middle to be a X
	else if (player1 == '8')
	{
		Board[2][1] = xCoin; b3 = 1;
	}

	// sets the bottom right to be a X
	else if (player1 == '9')
	{
		Board[2][2] = xCoin; c3 = 1;
	}
}

// A function that is used to set a player1 token in a slot chosen from the input, as well
// as set the correesponding int variable to equal 1 to state that player 1 has this spot!
void UpdatePlayer2Board() 
{
	// sets the top left to be a O
	if (player2 == '1')
	{
		Board[0][0] = yCoin; a1 = 2;
	}
	// sets the top middle to be a O
	else if (player2 == '2')
	{
		Board[0][1] = yCoin; b1 = 2;
	}

	// sets the top right to be a O
	else if (player2 == '3')
	{
		Board[0][2] = yCoin; c1 = 2;
	}

	// sets the middle left to be a O
	else if (player2 == '4')
	{
		Board[1][0] = yCoin; a2 = 2;
	}

	// sets the middle to be a O
	else if (player2 == '5')
	{
		Board[1][1] = yCoin; b2 = 2;
	}

	// sets the middle right to be a O
	else if (player2 == '6')
	{
		Board[1][2] = yCoin; c2 = 2;
	}

	// sets the bottom left to be a O
	else if (player2 == '7')
	{
		Board[2][0] = yCoin; a3 = 2;
	}

	// sets the bottom middle to be a O
	else if (player2 == '8')
	{
		Board[2][1] = yCoin; b3 = 2;
	}

	// sets the bottom right to be a O
	else if (player2 == '9')
	{
		Board[2][2] = yCoin; c3 = 2;
	}
}

// A function to show the board at any state of tokens placed as well as the start of the game with the default numbers
// to show where each number places a token.
void ShowBoard() 
{
	std::cout << Board[0][0] << " | " << Board[0][1] << " | " << Board[0][2] << std::endl;
	std::cout << "__" << "_" << "___" << "_" << "__" << std::endl;
	std::cout << Board[1][0] << " | " << Board[1][1] << " | " << Board[1][2] << std::endl;
	std::cout << "__" << "_" << "___" << "_" << "__" << std::endl;
	std::cout << Board[2][0] << " | " << Board[2][1] << " | " << Board[2][2] << std::endl;
}

int main()
{
	// Gets the first players name and saves it in a variable
	std::cout << "What is your name player one" << std::endl;
	std::cin >> Name0;
	
	// Gets the second players name and saves it in a variable
	std::cout << "What is your name player two" << std::endl;
	std::cin >> Name1;


	while (!_gameOver == true)
	{
		ShowBoard();

		// Gets player 1's input, updates the board, shows the board after then check if player 1 wins!
		getInput();

		// Updates the board here
		UpdatePlayer1Board();

		// Shows the board here
		ShowBoard();

		// Checks if player 1 wins!
		if (Player1Wins() == true)
			break;
		
		// Gets player 2's input, updates the board, shows the board after then check if player 2 wins!
		getInput2();

		// Updates the board here!
		UpdatePlayer2Board();

		// Shows the board here!
		ShowBoard();

		// Check if player 2 wins here!
		if (player2Wins() == true)
			break;
		
	

		system("pause");
		system("CLS");
	}

	// If player 1 was the winner this message is displayed and closes upon input!
	if (Player1Wins() == true)
		std::cout << "Player 1 Wins!" << std::endl;

	// If player 2 was the winner this message is displayed and closes upon input!
	else if (player2Wins() == true)
		std::cout << "Player 2 Wins!" << std::endl;

	system("pause");
}