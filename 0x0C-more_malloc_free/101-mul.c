#include <stdio.h>
#include <stdlib.h>

int is_valid_number(char *str) {
    int i;
    for (i = 0; str[i]; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return 0;
        }
    }
    return 1;
}


void multiply(char *num1, char *num2)
{
    int len1 = 0, len2 = 0, i, j;
    int *result;

    while (num1[len1])
        len1++;

    while (num2[len2])
        len2++;

    result = calloc(len1 + len2, sizeof(int));

    for (i = len1 - 1; i >= 0; i--) {
        for (j = len2 - 1; j >= 0; j--) {
            result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
            result[i + j] += result[i + j + 1] / 10;
            result[i + j + 1] %= 10;
        }
    }

    i = 0;
    while (i < len1 + len2 && result[i] == 0)
        i++;

    if (i == len1 + len2)
        putchar('0');

    for (; i < len1 + len2; i++)
        putchar(result[i] + '0');

    putchar('\n');

    free(result);
}

int main(int argc, char **argv)
{
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    if (!is_valid_number(argv[1]) || !is_valid_number(argv[2])) {
        printf("Error\n");
        return 98;
    }

    multiply(argv[1], argv[2]);

    return 0;
}

