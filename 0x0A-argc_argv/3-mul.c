#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two number passed in parameters
 * @argc: the length of passed parameters
 * @argv: an arrray contaiing the passed parameters
 *
 * Return: 0 if the programm compile successfly
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}




