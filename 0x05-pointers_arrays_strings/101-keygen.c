#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i;
    int password_length = 10;
    char password[password_length + 1];
    char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    srand(time(NULL));
    for (i = 0; i < password_length; i++)
    {
        password[i] = characters[rand() % (sizeof(characters) - 1)];
    }
    password[password_length] = '\0';

    printf("%s\n", password);
    return (0);
}
