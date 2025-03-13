#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - inputted number of bytes
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes of s2 to concatenate to s1
 * Return: pointer to concatenated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *con;
unsigned int l = n, i;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (i = 0; s1[i]; i++)
l++;

con = malloc(sizeof(char) * (l + 1));

if (con == NULL)
return (NULL);

l = 0;

for (i = 0; s1[i]; i++)
con[l++] = s1[i];

for (i = 0; s2[i] && i < n; i++)
con[l++] = s2[i];

con[l] = '\0';

return (con);
}
