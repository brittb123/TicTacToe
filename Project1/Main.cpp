#include <iostream>


int main()
{
	int min = 0;
	int numbers[25]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24 ,15 };
	int max = 25;
	bool correct = false;
	bool _gameOver = false;
	char player1token = 'X';
	char player2token = 'O';

	char Name0[8];
	std::cin >> Name0;
	std::cout << Name0 << std::endl;

	char Name1[8];
	std::cin >> Name1;
	std::cout << Name1 << std::endl;

	char Row1[9] = "_ _ _";

	while (_gameOver == false)
	{
		char answer[2] = " ";
		char Board[3][3] =
		{ { '1', '2', '3'},
		{'4', '5', '6'},
		{'7', '8', '9'} };


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
		if (answer == "1")
		{
			Board[2][1] >> player1token;
		}


	}



}