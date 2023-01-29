#include "utils.h"

#include <iostream>
#include <string>

using namespace std;

int usage() {

    char answer = 'Y';
    cout << "=================================================" << endl;
    cout << "Hi! This is \u0043 Guess the Number \u0043 Game" << endl;
    cout << "Everything is simple! The Computer guesses a number, the user (you) tries to guess" << endl;
    cout << "The number of attempts is counted and a table of records is formed" << endl;
    cout << "Are you ready to start? [Y/N]" << endl;
    cin >> answer;

    if(answer == 'Y') {
        return 1;
    }
    
    return 0;
}