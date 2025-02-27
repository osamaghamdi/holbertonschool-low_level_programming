#include "main.h"

/**
 * puts_half - hi
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
int l = 0;
int s;
int i;

while (str[l] != '\0')
{
l++;
}

if (l % 2 == 0)
{
s = l / 2;
}
else
{
s = (l + 1) / 2;
}

for (i = s; i < l; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
