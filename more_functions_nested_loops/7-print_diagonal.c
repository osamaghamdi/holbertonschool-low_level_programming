#include "main.h"

/**
 * print_diagonal - draws diagonal line
 * @n: num of time
 * Return: void
 */

void print_diagonal(int n)
{

int l = 0;
int s;

if (n > 0)
{

while (l < n)
{

for (s = 0; s < l; s++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
l++;
}

}
else
_putchar('\n');

}
