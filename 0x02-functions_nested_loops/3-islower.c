#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
  int result = (c >= 'a' && c <= 'z') ? 1 : 0;

  return (result);
}
