#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d;
    int name_len, owner_len, i;

    if (name == NULL || owner == NULL)
        return (NULL);

    d = malloc(sizeof(dog_t));
    if (d == NULL)
        return (NULL);

    name_len = strlen(name);
    owner_len = strlen(owner);

    d->name = malloc(name_len + 1);
    if (d->name == NULL) {
        free(d);
        return (NULL);
    }

    d->owner = malloc(owner_len + 1);
    if (d->owner == NULL) {
        free(d->name);
        free(d);
        return (NULL);
    }

    for (i = 0; i <= name_len; i++)
        d->name[i] = name[i];

    d->age = age;

    for (i = 0; i <= owner_len; i++)
        d->owner[i] = owner[i];

    return (d);
}

