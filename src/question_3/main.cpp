#include <iostream>
#include <string>
#include "question3.h"


int main()
{

    std::string userChoice;
    bool run = true;

    while (run == true){

        std::cout << "\n\n\nPress (Y) to start the program. Enter anything else to exit the program: ";
        std::cin >> userChoice;
        
        if (userChoice == "Y" || userChoice == "y"){

            std::string userPhrase;

            std::cout << "\n\nPlease enter a string: ";
            std::cin >> userPhrase;

            bool isResult = is_palindrome(userPhrase);

            if (isResult == true){

                std::cout << "True";
            }
            else{

                std::cout << "False";
            }
        }
        else{

            std::cout << "\n\nGoodbye. Have a nice day!";
            run = false;
        }
    }

    return 0;
}