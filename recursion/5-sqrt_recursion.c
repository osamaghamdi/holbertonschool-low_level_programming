#include "main.h"

/**
 * _sqr - hi
 * @s: num
 * @n: num
 * Return: the natural square root of a number
 */

int _sqr(int s, int n)
{
if (s * s > n)
{
return (-1);
}
else if (s * s == n)
{
return (s);
}
else
return (_sqr(s + 1, n));
}

/**
 * _sqrt_recursion - print natural square root of a number
 * @n: num
 * Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (_sqr(1, n));
}
