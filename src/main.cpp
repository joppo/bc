#include <iostream>
#include "operations.h"

int main()
{
	short int computer_number;
   	CreateNumber(computer_number);
	std::vector<short int> all_computer_guesses = GenerateAllNumbers();
	std::cout << "generated num is: " << computer_number << "\n";
	std::cout << "Make your guess:\n";
	short int player_number;
	std::cin >> player_number;
	short int computer_guess;
	bool end_of_game = false;
	while (!end_of_game)
	{
		std::vector<short int> answer = TellAnswer(player_number, computer_number);
		if (answer[0] == 4)
		{
			std::cout << "You win.";
			end_of_game = true;
			continue;
		}
		std::cout << "You have: " << answer[0] << " bulls, " << answer[1] << " caws\n";
		//computer starts
		
		std::cout << "Make another guess:\n";
		std::cin >> player_number;
	}
}
