#include "main.h"

/**
 * _isalpha - checks if a character is alphabetic
 * @c: character to check
 *
 * Return: 1 if c is alphabetic, 0 otherwise
 */
int _islower(int c)
{
int result = ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? 1 : 0;

return (result);
}
