#include "main.h"

/**
 * _strspn - get the length
 * @s: search
 * @accept: char
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{

int i = 0;
int j;

while (s[i] != '\0')
{

if (s[i] == ' ')
break;

for (j = 0; accept[j] != '\0'; j++)
{

if (s[i] == accept[j])
break;

}

if (accept[j] == '\0')
break;

i++;

}
return (i);
}
