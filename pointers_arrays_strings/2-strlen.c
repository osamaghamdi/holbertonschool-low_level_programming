#include "main.h"

/**
 * _strlen - return length
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{

int l = 0;

while (s[l] != '\0')
{
l++;
}
return (l);

}
