#include "question3.h"
#include <string>

bool test_config()
{
    return true;
}

bool is_palindrome(const std::string &phrase){

    std::string reverse_phrase = phrase;
    reverse(reverse_phrase.begin(), reverse_phrase.end());

    if (reverse_phrase == phrase){

        return true;
    }

    else{

        return false;
    }
}