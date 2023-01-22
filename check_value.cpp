#include <iostream>
#include <string>

#include "random_value.h"
#include "high_scores.h"
#include "argument.h"

int main() {

	const std::string high_scores_filename = "../../high_scores.txt";
	const int target_value = random_value();
	std::string user_name = userName();
	int attempts_count = 0;
	int current_value = 0;
	bool not_win = true;

	std::cout << "Enter your guess [integer number from 0 to 100]:" << std::endl;

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
			attempts_count++;
			std::cout << "You win! " << "Attempts: " << attempts_count << std::endl;
			break;
		}

	} while(true);

	writeScore(user_name, attempts_count, high_scores_filename);
	readScoreTable(high_scores_filename);

	return 0;
}