#include <vector>

void CreateNumber(short int &num);
std::vector<short int> TellAnswer(short int user_num, short int comp_num);
std::vector<short int> GetDigitsFromNumber(short int &num);
bool IsNumberValid(short int num);
std::vector<short int> GenerateAllNumbers();
void UpdatePossibleNumers(short int &guess, short int &bulls, short int &cows, std::vector<short int> &all_nums);

