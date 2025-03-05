#include "main.h"

/**
 * factorial - foc of given num
 * @n: number
 * Return: fac
 */

int factorial(int n)
{

if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
return (n * factorial(n - 1));

}
