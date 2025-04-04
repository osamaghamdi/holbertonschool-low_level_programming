#include "lists.h"

/**
 * add_dnodeint - add new node at beginning of list
 * @head: pointer to the head of the list
 * @n: integer for new node to contain
 * Return: if the function fails return NULL else return address of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->prev = NULL;
new->next = *head;
if (*head != NULL)
(*head)->prev = new;
*head = new;

return (new);
}
