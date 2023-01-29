#include <iostream>
#include <string>

#include "random_value.h"
#include "high_scores.h"
#include "invitation.h"
#include "check_value.h"
#include "utils.h"

using namespace std;

int main(int argc, char *argv[]) {

    int user_answer = usage();

    if(user_answer) {
    
    const std::string high_scores_filename = "../../high_scores.txt";
	const int target_value = random_value();
	std::string user_name = userName();
	int attempts_count = 0;
	int current_value = 0;
	bool not_win = true;

    attempts_count = check_value(target_value);

	writeScore(user_name, attempts_count, high_scores_filename);
	readScoreTable(high_scores_filename);

    }

	
	return 0;

}