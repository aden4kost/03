#pragma once

#include <string>

int writeScore(std::string user_name, int attempts_count, const std::string high_scores_filename);
int readScoreTable(const std::string high_scores_filename);