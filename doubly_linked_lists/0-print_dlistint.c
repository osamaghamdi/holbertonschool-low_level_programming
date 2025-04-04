#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all element of list
 * @h: the head of list
 * Return: number of nodes in list
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t node = 0;

while (h)
{
node++;
printf("%d\n", h->n);
h = h->next;
}

return (node);
}
