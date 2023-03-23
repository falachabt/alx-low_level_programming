#include "main.h"

/**
 *_isupper - check if the given input is uppercase
 *@c: - The input to check if is uppercase
 *
 *Return: -1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
  
return ((c >= 'A' &&  c <= 'Z') ? 1 : 0);
}
