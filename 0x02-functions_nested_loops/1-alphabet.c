#include "main.h"

/**
 *this function return all letters of alphabet in the lower case
 *
 */
void print_alphabet(void)
{
    char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 
                          'j', 'k', 'l', 'm', 'n', 'o','p', 'q', 'r', 's',
			  't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int i;
    
    for(i = 0; i<26; i++)
    {
      _putchar(alphabet[i]);
    }
    _putchar('\n');
}
