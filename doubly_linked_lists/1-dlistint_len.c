#include "lists.h"

/**
 * dlistint_len - counts the number of elements in linked list
 * @h: head of the list
 * Return: number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{

size_t node = 0;

while (h)
{

node++;
h = h->next;

}

return (node);

}
