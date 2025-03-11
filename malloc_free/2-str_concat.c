#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: string concatenated upon
 * @s2: string to s1
 * Return: pointer the newly-allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
char *str;
int i, con_i = 0, l = 0;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] || s2[i]; i++)
l++;

str = malloc(sizeof(char) * l);

if (str == NULL)
return (NULL);

for (i = 0; s1[i]; i++)
str[con_i++] = s1[i];

for (i = 0; s2[i]; i++)
str[con_i++] = s2[i];

return (str);
}
