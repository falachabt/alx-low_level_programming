#include "main.h"
#include <stdio.h>

/**
 *fizzbuzz: print some special things*
 *Return: nothing to return
 */
void fizz_buzz(void)
{
  
int i;

for (i=1; i<=100; i++)
{
    
if (i%15 ==0)
{
  
printf("FizzBuzz");
}
else if (i%5 == 0)
{

printf("Buzz");
}
else if (i%3 == 0)
{

printf("Fizz");
}
else
{

printf(i);
}
}

printf("\n");
}
    
