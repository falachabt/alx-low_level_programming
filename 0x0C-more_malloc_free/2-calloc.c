#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
  void *ptr;
  unsigned int i;
  char *ptr_ch;

  if (nmemb == 0 || size == 0)
    return (NULL);

  ptr = malloc(nmemb * size);

  if (ptr == NULL)
    return (NULL);

  ptr_ch = ptr;

  for (i = 0; i < nmemb * size; i++)
    ptr_ch[i] = 0;

  return (ptr);
}

