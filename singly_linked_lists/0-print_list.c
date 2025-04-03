#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints the elements of list_t list
 * @h: list_t list
 * Return: number of nodes in h
 */

size_t print_list(const list_t *h)
{
size_t nod = 0;
while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");

else
printf("[%d] %s\n", h->len, h->str);

nod++;
h = h->next;
}

return (nod);
}
