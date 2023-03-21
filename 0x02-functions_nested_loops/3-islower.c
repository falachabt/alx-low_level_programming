#include "main.h"
#include <ctype.h>

/**
 *This function will take in paremter one caracter 
 *
 *this will return 1 if the char islower
 *
 *other whise it will return 0
 *
 *to do this it use the function 
 */
int _islower(int c)
{
  int result = (isLower(c))? 1 : 0;

  return result;
}
