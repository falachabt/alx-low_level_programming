#include "main.h"

/**
 * print_number - print a givent number
 * @n: the number to be print
 *
 * Return: nothing to be returned
 */
void print_number(int n)
{
	int sign = 1; 
	int power = 1;
    	int digit;

    /* If n is zero, print 0 and return */
    	if (n == 0)
    	{
     		_putchar('0');
        	return;
    	}

    /* If n is negative, change the sign and print '-' */
    	if (n < 0)
    	{
        	sign = -1;
        	_putchar('-');
    	}

    	while (n / (power * 10) != 0)
   	{
        	power *= 10;
    	}

   
    	while (power > 0)
    	{

	        digit = (n / power) * sign;

        /* Print the digit as a character by adding '0' */
        _putchar(digit + '0');

        /* Remove the digit from n by taking the modulus by power */
        n %= power;

        /* Divide the power by 10 to move to the next digit */
        power /= 10;
    }
}
