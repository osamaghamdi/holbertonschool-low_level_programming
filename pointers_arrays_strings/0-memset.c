#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory
 * @s: pointer
 * @b: The character to fill the memory
 * @n: The number of bytes
 * Return: A pointer
 */

char *_memset(char *s, char b, unsigned int n)
{

unsigned int i;

for (i = 0; n > 0; i++, n--)
{
s[i] = b;
}
return (s);
}
