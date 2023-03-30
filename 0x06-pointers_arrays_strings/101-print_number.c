#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 */
void print_number(int n)
{
    int power, num;

    power = 1;

    if (n < 0)
    {
        _putchar('-');
        n *= -1;
    }

    num = n;

    while (num / 10 != 0)
    {
        power *= 10;
        num /= 10;
    }

    while (power != 0)
    {
        _putchar((n / power) + '0');
        n %= power;
        power /= 10;
    }
}

