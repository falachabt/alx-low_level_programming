#include <limits.h>

/**
 * _atoi - dlqsjflkdjqslkfjdqs
 * @s: the input
 *
 * Return: the result of the tranformation
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
		{
			result = INT_MAX;
			break;
		}
		else if (result < INT_MIN / 10 || (result == INT_MIN / 10 && s[i] - '0' > -(INT_MIN % 10)))
		{
			result = INT_MIN;
			break;
		}
		result = result * 10 + sign * (s[i] - '0');
		i++;
	}
	return (result);
}
