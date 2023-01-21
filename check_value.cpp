#include <iostream>
#include <string>

#include "random_value.h"
#include "high_scores.h"
#include "argument.h"

int main() {

	const int target_value = random_value();
	const std::string user_name = userName();
	int attempts_count = 0;
	int current_value = 0;
	bool not_win = true;

	std::cout << "Enter your guess:" << std::endl;

	do {
		std::cin >> current_value;

		if (current_value < target_value) {
			std::cout << "greater than " << current_value << std::endl;
			attempts_count++;
		}
		else if (current_value > target_value) {
			std::cout << "less than " << current_value << std::endl;
			attempts_count++;
		}
		else {
			std::cout << "you win!" << std::endl;
			break;
		}

	} while(true);

	int writeScore(const std::string user_name, int attempts_count);
	int readScoreTable(std::string high_scores_filename);

	return 0;
}