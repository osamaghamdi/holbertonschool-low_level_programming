#include "main.h"

/**
 * _memcpy - Copy string
 * @dest: destination
 * @src: source
 * @n: bytes
 * Returne: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
