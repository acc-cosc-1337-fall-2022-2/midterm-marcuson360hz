#include "question1.h"
#include <string>

bool test_config()
{
    return true;
}

std::string get_factorial_sequence(int num){

    int sum = 1;
    int counter = 1;

    std::string factorialResult;
    std::string factorialLoop;

    while (num > 0){

        factorialLoop += std::to_string(counter) + "x";
        sum = sum * num;
        num--;
        counter++;
    }

    factorialResult = std::to_string(sum);

    factorialLoop.pop_back();
    factorialLoop = factorialLoop + "=" + factorialResult;

    return factorialLoop;
}