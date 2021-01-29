#include <iostream>
#include "operations.h"

int main()
{
	short int computer_number;
   	CreateNumber(computer_number);
	std::cout << "generated num is: " << computer_number << "\n";
	std::cout << "Make your guess:\n";
	short int player_guess;
	std::cin >> player_guess;
}
