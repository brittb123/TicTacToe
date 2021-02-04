#include <iostream>


int main()
{
	// A variable that checks if the gameover is set to true or false 
	bool _gameOver = false;

	char xCoin = 'X';
	char yCoin = 'O';

	char Name0[8];
	std::cout << "What is your name player one" << std::endl;
	std::cin >> Name0;
	

	char Name1[8];
	std::cout << "What is your name player two" << std::endl;
	std::cin >> Name1;


	// Sets the row characters to have the rows of the board
	char Row1[9] = "_ _ _";

	char Board[3][3] =
	{ { '1', '2', '3'},
	{'4', '5', '6'},
	{'7', '8', '9'} };


	// A for loop that prints out the board in a specific order to give the 
	// 3x3 look on screen
	

	while (!_gameOver == true)
	{
		char player1;
		char player2;

		std::cout << Board[0][0] << " | " << Board[0][1] << " | " << Board[0][2] << std::endl;
		std::cout << "__" << "_" << "___" << "_" << "__" << std::endl;
		std::cout << Board[1][0] << " | " << Board[1][1] << " | " << Board[1][2] << std::endl;
		std::cout << "__" << "_" << "___" << "_" << "__" << std::endl;
		std::cout << Board[2][0] << " | " << Board[2][1] << " | " << Board[2][2] << std::endl;

		// An array of arrays that have the board set in a three by three!
		std::cout << Name0 << ": You are first pick a number from 1 to 9 to place an X" << std::endl;
		std::cin >> player1;

		if (player1 == '1')
			Board[0][0] = xCoin;

		else if (player1 == '2')
			Board[0][1] = xCoin;

		else if (player1 == '3')
			Board[0][2] = xCoin;

		else if (player1 == '4')
			Board[1][0] = xCoin;

		else if (player1 == '5')
			Board[1][1] = xCoin;

		else if (player1 == '6')
			Board[1][2] = xCoin;

		else if (player1 == '7')
			Board[2][0] = xCoin;

		else if (player1 == '8')
			Board[2][1] = xCoin;

		else if (player1 == '9')
			Board[2][2] = xCoin;


		std::cout << Board[0][0] << " | " << Board[0][1] << " | " << Board[0][2] << std::endl;
		std::cout << "__" << "_" << "___" << "_" << "__" << std::endl;
		std::cout << Board[1][0] << " | " << Board[1][1] << " | " << Board[1][2] << std::endl;
		std::cout << "__" << "_" << "___" << "_" << "__" << std::endl;
		std::cout << Board[2][0] << " | " << Board[2][1] << " | " << Board[2][2] << std::endl;

		std::cout << Name1 << ": You are next pick a number from 1 to 9 to place an X" << std::endl;
		std::cin >> player2;

		if (player2 == '1')
			Board[0][0] = yCoin;

		else if (player2 == '2')
			Board[0][1] = yCoin;

		else if (player2 == '3')
			Board[0][2] = yCoin;

		else if (player2 == '4')
			Board[1][0] = yCoin;

		else if (player2 == '5')
			Board[1][1] = yCoin;

		else if (player2 == '6')
			Board[1][2] = yCoin;

		else if (player2 == '7')
			Board[2][0] = yCoin;

		else if (player2 == '8')
			Board[2][1] = yCoin;

		else if (player2 == '9')
			Board[2][2] = yCoin;

		std::cout << Board[0][0] << " | " << Board[0][1] << " | " << Board[0][2] << std::endl;
		std::cout << "__" << "_" << "___" << "_" << "__" << std::endl;
		std::cout << Board[1][0] << " | " << Board[1][1] << " | " << Board[1][2] << std::endl;
		std::cout << "__" << "_" << "___" << "_" << "__" << std::endl;
		std::cout << Board[2][0] << " | " << Board[2][1] << " | " << Board[2][2] << std::endl;
		system("pause");
		system("CLS");
	}
}