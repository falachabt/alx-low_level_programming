#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: buffer size
 *
 * Return: pointer to result, or 0 if result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = 0, len2 = 0, carry = 0, sum = 0;

    while (n1[len1])
        len1++;
    while (n2[len2])
        len2++;

    if (len1 >= size_r || len2 >= size_r)
        return (0);

    r[size_r - 1] = '\0';
    while (len1 > 0 || len2 > 0)
    {
        len1--;
        len2--;

        if (len1 >= 0)
            sum += n1[len1] - '0';

        if (len2 >= 0)
            sum += n2[len2] - '0';

        sum += carry;

        if (sum >= 10)
            carry = 1;
        else
            carry = 0;

        r[size_r - 2] = (sum % 10) + '0';
        size_r--;
        sum = 0;
    }

    if (carry == 1)
    {
        if (size_r == 1)
            return (0);
        r[size_r - 2] = '1';
    }

    return (r + (size_r - 1));
}

