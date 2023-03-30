#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
    int digits = 1, divisor = 1, i, digit_value, last_digit;

    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    /* Determine the number of digits in the integer */
    while ((n / divisor) >= 10)
    {
        digits++;
        divisor *= 10;
    }

    for (i = 0; i < digits; i++)
    {
        divisor /= 10;
        digit_value = n / divisor;
        last_digit = n % 10;
        n %= divisor;
        if (digit_value < 0)
            digit_value = -digit_value;
        _putchar(digit_value + '0');
    }

    if (last_digit < 0)
        last_digit = -last_digit;
    _putchar(last_digit + '0');
}

