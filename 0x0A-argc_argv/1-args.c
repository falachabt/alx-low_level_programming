#include <stdio.h>
/**
 * main - give the lenght of parameter passed into a fiel
 * @argc: the legnt fo the argv array
 * @argv: the array containning the given parameter
 *
 * Return: 0 if the programm compile succesfuly
 */
int  main(int argc, __attribute__((unused))  char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
