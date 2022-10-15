#include <iostream>
#include <string>
#include "question1.h"


int main(){

    bool userExit = false;

    do {
        int menuSelection;

        std::cout << "Welcome to the Factorial Program. Please view the menu and select an option." << "\n\n";
		std::cout << "1 - Run Factorial Program" << "\n";
		std::cout << "2 - Exit Program" << "\n\n";

		std::cout << "Select your menu option: ";
        std::cin >> menuSelection;

		switch (menuSelection)
    {
        case 1: {

			int factorialNumber;
            std::string factorialOutput;

			std::cout << "\n\nYou chose Factorials. Please select a number between 1-10: ";
			std::cin >> factorialNumber;

            if (factorialNumber >= 1 && factorialNumber <= 10){

                factorialOutput = get_factorial_sequence(factorialNumber);
                std::cout << "\n\nYour number was: " << factorialNumber << "Your factorial result: " << factorialOutput << "\n\n";
            }
            else{

                std::cout << "\nInvalid Input. Returning you to the Main Menu.\n\n";
            }

            break;
		}

        case 2: {

			char exitConfirmation;

			std::cout << "\nAre you sure you want to exit? (Y = Yes | N = No)\n" << "Enter your selection: ";
			std::cin >> exitConfirmation;

			if (exitConfirmation == 'y' || exitConfirmation == 'Y'){

				std::cout << "\n\nThank you for using the program, Goodbye!" << std::endl;
                userExit = true;
			} 
            else if (exitConfirmation == 'n' || exitConfirmation == 'N'){

				std::cout << "\nReturning you to the Main Menu.\n\n";
			}
            else{

                std::cout << "\nInvalid Input. Returning you to the Main Menu.\n\n";
            }
            break;
		}

        default: {

            std::cout << "\nInvalid Input. Returning you to the Main Menu.\n\n";
            break;
        }
			
    }
    }
    while (userExit != true);

    return 0;
}