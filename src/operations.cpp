#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "operations.h"

void CreateNumber(short int &num)
{
	//srand(time(NULL));
	bool isValid = false;
	while (!isValid) {
		num = rand() % (9999-1023 + 1) + 1023;
		std::vector digits = GetDigitsFromNumber(num);
		std::cout << digits[0] << digits[1] << digits[2] << digits[3] << "\n";
		if (digits[0] != digits[1] && digits[0] != digits[2] && digits[0] != digits[3] && digits[1] != digits[2] && digits[1] != digits[3] && digits[2] != digits[3] ) {
			isValid = true;
		}
	}
}

std::vector<short int> TellAnswer(&num)
{
	std::vector<short int> answer;
}
std::vector<short int> GetDigitsFromNumber(short int &num)
{
	std::vector<short int> digits;
	digits.push_back(num % 10000 / 1000);
	digits.push_back(num % 1000 / 100);
    digits.push_back(num % 100 / 10);
	digits.push_back(num % 10);
	return digits
}
