// Challenge
// Given an integer x, return true if x is
// a palindrome, and false otherwise.



#include <iostream>



int reverseDigits(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

bool isPalindrome(int x) {
    if (reverseDigits(x) == x)
    {
        return true;
    }
    return false;
}

bool testIsPalindrome(int input, int expected)
{
    if (isPalindrome(input) == expected)
    {
        std::cout << "Success\n";
        return true;
    }
    std::cout << "Failure\n";
    return false;
}


int main()
{
    testIsPalindrome(121, true);
    testIsPalindrome(-121, false);
    testIsPalindrome(10, false);
}