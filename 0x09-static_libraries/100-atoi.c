#include "main.h"

int _atoi(char *s)
{
    int res = 0; // Initialize result
    int sign = 1; // Initialize sign as positive
    int i = 0; // Initialize index of first digit

    // If number is negative, then update sign
    if (s[0] == '-')
    {
        sign = -1;
        i++; // Also update index of first digit
    }

    // Iterate through all digits of input string and update result
    for (; s[i] != '\0'; ++i)
        res = res * 10 + s[i] - '0';

    // Return result with sign
    return sign * res;
}

