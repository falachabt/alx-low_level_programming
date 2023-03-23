#include "main.h"

/**
 *print_square: print a square of a pricise size
 *@n: the size of the square
 *
 *Return: nothin to return
 */
void print_square(int n)
{

if(n>0)
{

int i ;
 
for(i=0; i<n; <i++)
{

int j;
 
for (j=0; j<n; j++)
{

_putchar('#');
}

_putchar('\n');
}
}
else
{

_putchar('\n');
}
}
