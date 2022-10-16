#include <iostream>
#include "question4.h"
#include <string>


int main()
{

    bool userExit = false;

    do {
        int menuSelection;

        std::cout << "Welcome to the Prime Program. Please view the menu and select an option." << "\n\n";
		std::cout << "1 - Run Prime Program" << "\n";
		std::cout << "2 - Exit Program" << "\n\n";

		std::cout << "Select your menu option: ";
        std::cin >> menuSelection;

		switch (menuSelection)
    {
        case 1: {

			int primeNumber;
            bool primeOutput;

			std::cout << "\n\nYou chose Prime Program. Please select a number between 1-60: ";
			std::cin >> primeNumber;

            if (primeNumber >= 1 && primeNumber <= 60){

                primeOutput = get_primes(primeNumber);
                std::cout << "\n\nYour number was: " << primeNumber << "Your Prime result: " << primeOutput << "\n\n";
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