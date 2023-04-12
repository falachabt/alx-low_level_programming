#include <stdio.h>

int  main(int argc, char *argv[])
{
	(void) argc;
	int i = 0;
	char name = *argv[0];

	while(name[i] != '\0')
	{
		_putchar(name[i]);
	}
	return (0);
}
