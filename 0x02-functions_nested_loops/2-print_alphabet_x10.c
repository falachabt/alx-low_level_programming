#include "main.h"

/** this function will print x10 time the alphabet in a new line
 *the exepected return is 0
 */
void print_alphabet_x10(void)
{
  char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r' ,'s', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
  int i;
  int j;
  
  for(i = 0; i<10; i++)
    {
      for(j=0; j<=26; j++)
	{
	  if(j==26)
	    {
	      _putchar('\n');
	      continue;
	    }
	  
	  _putchar(alphabet[j]);
	}
    }
}
