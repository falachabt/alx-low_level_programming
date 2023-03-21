#include "main.h"

/**
 * print_sign - print the sign of a givent number
 * @n: number to check the sign 
 *
 *Return: 1 if positif, 0 if zeo, and -1 of negatif
 */
int print_sign(int n)
{
if(n > 0)
  {
_putchar('+');
return (1);
}else if(n == 0)
  {
_putchar('0');
return (0);
}else
  {
_putchar('-');
return (-1);
}
}
