#include "main.h"

/**
 * print_sign - print the sign of the number
 *@n: input number
 * Return: int
 *
 */

int print_sign(int n)
{

if (n > 0)
{
_putchar('+');
return (1);
}

else if (n == 0)
{
_putchar('0');
return (0);
}

else
{
_putchar('-');
return (-1);
}

}
