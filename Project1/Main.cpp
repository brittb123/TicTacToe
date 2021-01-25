#include <iostream>


int main()
{
	// A variable that checks if the gameover is set to true or false 
	bool _gameOver = false;

	char player1token = 'X';
	char player2token = 'O';

	char Name0[8];
	std::cout << "What is your name player one" << std::endl;
	std::cin >> Name0;
	std::cout << Name0 << std::endl;

	char Name1[8];
	std::cout << "What is your name player two" << std::endl;
	std::cin >> Name1;
	std::cout << Name1 << std::endl;

	// Sets the row characters to have the rows of the board
	char Row1[9] = "_ _ _";

	while (_gameOver == false)
	{
		char answer[2] = " ";

		// An array of arrays that have the board set in a three by three!
		char Board[3][3] =
		{ { '1', '2', '3'},
		{'4', '5', '6'},
		{'7', '8', '9'} };

		// A for loop that prints out the board in a specific order to give the 
		// 3x3 look on screen
		for (int row = 0; row < 3; row++)
		{
			for (int col = 0; col < 3; col++)
			{
				std::cout << Board[row][col];

			}
			std::cout << std::endl;
		}
		std::cout << "You are first pick a number from 1 to 9 to place an X" << std::endl;
		std::cin >> answer;

		// If player answers with 1 then a player 1 token is placed
		if (answer == "1")
		{
			Board[2][1] >> player1token;
		}


	}



}