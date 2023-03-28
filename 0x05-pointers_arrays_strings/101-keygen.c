#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the 101-crackme program
 *
 * Description: This program generates random valid passwords for
 * the 101-crackme program. It uses the srand, rand, and time
 * functions from the standard library to generate random passwords.
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;
	char password[100];
	char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int sum = 0;
	int length = 0;

	srand(time(NULL));
	while (sum != 2772)
	{
		sum = 0;
		length = rand() % 10 + 10;
		for (i = 0; i < length; i++)
		{
			password[i] = characters[rand() % (sizeof(characters) - 1)];
			sum += password[i];
		}
	}
	password[length] = '\0';

	printf("%s\n", password);
	return (0);
}
