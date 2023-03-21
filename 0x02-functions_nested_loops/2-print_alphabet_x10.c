#include "main.h"

/** this function will print x10 time the alphabet in a new line
 *the exepected return is 0
 */
void print_alphabet_x10(void)
{
  int i;

  for(i = 0; i<10; i++)
    {
      print_alphabet();
      _putchar('\n');
    }
}
