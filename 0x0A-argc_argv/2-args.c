#include <stdio.h>

/**
 * main - print all the passed argument in the function
 * @argc: the lenght of the argv array
 * @argv: the array containing the passed parameter
 *
 * Return: 0 if the programm compile successfuly
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
