#include "lists.h"

/**
 * sum_dlistint - sum all the data of list
 * @head: head of the list
 * Return: sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}

return (sum);
}
