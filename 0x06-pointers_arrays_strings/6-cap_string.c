#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string to capitalize
 *
 * Return: (s) the capitalized string
 */
char *cap_string(char *s)
{
    char separators[] = " \t\n,;.!?\"(){}";
    int new_word = 1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (new_word && s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= ('a' - 'A');
            new_word = 0;
        }
        else
        {
            for (int j = 0; separators[j] != '\0'; j++)
            {
                if (s[i] == separators[j])
                {
                    new_word = 1;
                    break;
                }
            }
        }
    }

    return (s);
}
