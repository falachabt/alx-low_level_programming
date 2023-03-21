#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

void print_alphabet(void)
{
    char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int i = 0;

    for( i = 0; i<26; i++)
    {
      _putchar(alphabet[i]);
    }
    _putchar('\n');
}

#endif /* MAIN_H */
