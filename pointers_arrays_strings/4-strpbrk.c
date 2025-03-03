#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - locates a character in a string
 * @s: string to check
 * @accept: characters to search
 * Return: pointer to bytes
 */

char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{

for (i = 0; accept[i]; i++)
{

if (*s == accept[i])
{

return (s);
}
}
s++;
}
return ('\0');
}
