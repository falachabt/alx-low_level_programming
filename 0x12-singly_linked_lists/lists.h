#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - sied list
 * @str: string -c'ed string)
 * @len: lengstring
 * @next: pnts to ext node
 *
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _strlen(const char *s);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void startup(void) __attribute__((constructor));
#endif
