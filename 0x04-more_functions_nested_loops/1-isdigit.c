#include "main.h"

/**
 * _isdigit: check if input number is a digit
 *@c: the number to check if is digit
 *
 *Return: it return 1 if the number is a git or 0
 */
int _isdigit(int c)
{

return ((c >= '0' && c <= '9') ? 1 : 0);
}
