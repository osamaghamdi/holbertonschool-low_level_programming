#include "main.h"
#include <stdlib.h>

/**
 * _strdup - pointer to a newly-allocated space in memory
 * @str: string
 * Return: pointer to string
 */
char *_strdup(char *str)
{
char *dup;
int i, l = 0;

if (str == NULL)
return (NULL);

for (i = 0; str[i]; i++)
l++;

dup = malloc(sizeof(char) * (l + 1));

if (dup == NULL)
return (NULL);

for (i = 0; str[i]; i++)
dup[i] = str[i];

dup[l] = '\0';

return (dup);
}
