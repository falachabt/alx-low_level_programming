#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    if (*s == '\0')
        return (1);
    return (_is_palindrome(s, s + _strlen_recursion(s) - 1));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return (0);
    return (1 + _strlen_recursion(s + 1));
}

/**
 * _is_palindrome - checks if a string is a palindrome
 * @s: start of the string
 * @e: end of the string
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int _is_palindrome(char *s, char *e)
{
    if (s >= e)
        return (1);
    if (*s != *e)
        return (0);
    return (_is_palindrome(s + 1, e - 1));
}

