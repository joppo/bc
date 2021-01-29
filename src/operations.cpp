#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include "operations.h"

void CreateNumber(short int &num)
{
	//srand(time(NULL));
	bool isValid = false;
	while (!isValid) {
		num = rand() % (9999-1023 + 1) + 1023;
		std::vector<short int> digits = GetDigitsFromNumber(num);
		std::cout << digits[0] << digits[1] << digits[2] << digits[3] << "\n";
		if (digits[0] != digits[1] && digits[0] != digits[2] && digits[0] != digits[3] && digits[1] != digits[2] && digits[1] != digits[3] && digits[2] != digits[3] ) {
			isValid = true;
		}
	}
}


std::vector<short int> GetDigitsFromNumber(short int &num)
{
	std::vector<short int> digits;
	digits.push_back(num % 10000 / 1000);
	digits.push_back(num % 1000 / 100);
    digits.push_back(num % 100 / 10);
	digits.push_back(num % 10);
	return digits;
}

std::vector<short int> TellAnswer(short int user_num, short int comp_num)
{
	std::vector<short int> answer;
	answer.push_back(0);
	answer.push_back(0);
	std::vector<short int> c_dig = GetDigitsFromNumber(comp_num);
	std::vector<short int> u_dig = GetDigitsFromNumber(user_num);
	for (int i = 0; i < 4; i++)
	{
		if (u_dig[i] == c_dig[i]) {
			answer[0]++;
			continue;
		}
		if (u_dig[i] == c_dig[0] || u_dig[i] == c_dig[1] || u_dig[i] == c_dig[2] || u_dig[i] == c_dig[3])
			answer[1]++;
	}
	return answer;
}
