#include <iostream>
#include "operations.h"

int main()
{
	short int computer_number;
   	CreateNumber(computer_number);
	std::cout << "generated num is: " << computer_number << "\n";
	std::cout << "Make your guess:\n";
	short int player_number;
	std::cin >> player_number;
	short int test = computer_number;
	std::vector<short int> answer = TellAnswer(player_number, test);
	std::cout << "answer: " ;
}	
