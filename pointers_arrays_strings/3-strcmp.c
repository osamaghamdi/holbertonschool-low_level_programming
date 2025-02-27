#include "main.h"

/**
 * _strcmp - compare
 * @s1: p
 * @s2: p
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{

while (*s1 && *s2)
{

if (*s1 != *s2)
{

return (*s1 - *s2);

}

s1++;
s2++;

}

return (*s1 - *s2);

}
