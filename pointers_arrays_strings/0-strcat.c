#include "main.h"

/**
 * _strcat - Concatenates the string pointed to by @src
 * @dest: pointer
 * @src: The source string
 * Return: A pointer
 */

char *_strcat(char *dest,  char *src)
{
char *dest_ptr = dest;

while (*dest_ptr != '\0')
dest_ptr++;

while (*src != '\0')
{
*dest_ptr = *src;
dest_ptr++;
src++;
}

*dest_ptr = '\0';

return (dest);
}
