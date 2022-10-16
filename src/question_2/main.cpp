#include <iostream>
#include <cmath>
#include "question2.h"
#include <string>



int main(){

    srand(time(NULL));

    std::string userChoice;
    bool run = true;

    //LOOP FOR TESTING - 10 ITERATION FOR LOOP
    for (int i = 0; i < 10; i++){

        std::cout << roll_die() << " ";
    }

    while (run == true){

        std::cout << "\n\n\nPress (Yes/Y) to roll the dice. Enter anything else to exit the program: ";
        std::cin >> userChoice;

        std::tolower(userChoice);
        
        if (userChoice == "yes" || userChoice == "y"){

            std::cout << "The die landed on: " << roll_die() << "\n";
        }
        else{

            run = false;
        }
    }

    return 0;
}