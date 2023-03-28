#include <limits.h>

/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Description: This function converts a string to an integer,
 * taking into account any signs before the number. If there are
 * no numbers in the string, the function returns 0.
 *
 * Return: the converted integer value
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;
	int digit;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		digit = sign * (s[i] - '0');
		if (sign > 0 && (result > INT_MAX / 10 ||
			(result == INT_MAX / 10 && digit > INT_MAX % 10)))
		{
			result = INT_MAX;
			break;
		}
		else if (sign < 0 && (result < INT_MIN / 10 ||
			(result == INT_MIN / 10 && digit < INT_MIN % 10)))
		{
			result = INT_MIN;
			break;
		}
		result = result * 10 + digit;
		i++;
	}

	return (result);
}
