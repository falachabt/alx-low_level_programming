#include <stdio.h>

int  main(int argc, char *argv[])
{
	if (*argv[argc - 1] != '\0')
		printf("%d \n",argc - 1);
	else
		printf("%d \n", 0);

	return (0);
}
