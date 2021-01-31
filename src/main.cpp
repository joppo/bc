#include <iostream>
#include "operations.h"

int main()
{
	short int computer_number;
	short int player_number;
	short int computer_guess;
	short int bulls;
	short int cows;
	bool end_of_game = false;
   	CreateNumber(computer_number);
	std::vector<short int> all_computer_guesses = GenerateAllNumbers();
	std::cout << "generated num is: " << computer_number << "\n";
	std::cout << "Make your guess:\n";
	std::cin >> player_number;
	while (!end_of_game)
	{
		std::vector<short int> answer = TellAnswer(player_number, computer_number);
		if (answer[0] == 4)
		{
			std::cout << "You win.";
			end_of_game = true;
			continue;
		}
		std::cout << "You have: " << answer[0] << " bulls, " << answer[1] << " cows\n";
		//computer starts
		computer_guess = all_computer_guesses.front();
		std::cout << "I say: " << computer_guess << "\nBulls: ";
		std::cin >> bulls;
		std::cout << "Cows: ";
		std::cin >> cows;
		std::cout << "numbers before update:" << all_computer_guesses.size() << "\n";
		UpdatePossibleNumers(computer_guess, bulls, cows, all_computer_guesses);
		std::cout << "numbers after update:" << all_computer_guesses.size() << "\n";


		std::cout << "Make another guess:\n";
		std::cin >> player_number;
	}
}
