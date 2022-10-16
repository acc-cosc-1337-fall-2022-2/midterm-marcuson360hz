#include "question4.h"
#include <iostream>


bool test_config()
{
    return true;
}

bool is_prime(int prime_param){

    if (prime_param <= 1){

        return false;
    }
        
    for (int i = 2; i < prime_param; i++){

        if (prime_param % i == 0){

            return false;
        }
    }

    return true;

}

std::vector<int> get_primes(int num){

    std::vector<int> numVector;

    for (int i = 2; i <= num; i++){

        if (is_prime(i)){

            numVector.push_back(i) + " ";
        }
    }

    return numVector;
}