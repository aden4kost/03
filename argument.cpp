#include <iostream>
#include <string>

#include "argument.h"

std::string userName() {

	std::string user_name = userName();
	
	std::cout << "Hi! Enter your name, please:" << std::endl;
    std::cin >> user_name;

    return user_name;

}