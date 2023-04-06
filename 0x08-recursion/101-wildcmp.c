#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if they are identical or if
 * the second string can contain a '*' wildcard character that matches any
 * string (including an empty string).
 * @s1: first string
 * @s2: second string with wildcard '*'
 *
 * Return: 1 if identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
    /* check for base cases */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s2 == '*')
	{
		if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1)); /* match empty string */
		else
			return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)); /* match any string */
	}
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1)); /* match same characters */
	else
		return (0); /* no match */
}

