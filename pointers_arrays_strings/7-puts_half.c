#include "main.h"

/**
 * puts_half - hi
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{

int i, j, m;
i = 0;

while (str[i] != '\0')
{

i++;

}

m = i;
j = m / 2;

while (j <= m)
{

_putchar(str[j]);
j++;
}

_putchar('\n');

}
