#include "main.h"
#include <ctype.h>

/**
 *This function will take in paremter one caracter 
 *
 *this will return 1 if the char islower
 *
 *other whise it will return 0
 *
 *to do this it use the function the ascii comparaison
 */
int _islower(int c)
{
  int result = (c >= 'a' && c <= 'z')? 1 : 0;

  return result;
}
