#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: the number of arguments passed to the program.
 * @argv: an array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	unsigned char *p = (unsigned char *)main;

	for (i = 0; i < nbytes; i++)
	{
		printf("%02x", *(p + i));
		if (i == nbytes - 1)
			printf("\n");
		else
			printf(" ");
	}

	return (0);
}

