#include "main.h"
#include <stdio.h>

/**
 *main -  print some special things
 *
 *Return: nothing to return
 */
int  main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	_putchar('\n');

	return (0);
}
