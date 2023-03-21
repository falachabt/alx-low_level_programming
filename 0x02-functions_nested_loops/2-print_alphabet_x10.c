#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 *
 * This function uses two nested loops to print the alphabet in lowercase
 * 10 times. The outer loop iterates 10 times and the inner loop iterates
 * over an array of characters that contains all the letters of the alphabet.
 * In each iteration of the inner loop, it prints one letter using the _putchar
 * function. After each iteration of the outer loop, it prints a new line character
 * using _putchar('\n').
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
