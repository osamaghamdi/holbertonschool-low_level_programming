#include "main.h"

/**
 * is_prime - hi
 * @n1: number
 * @n2: number
 * Return: number
 */

int is_prime(int n1, int n2)
{

if (n2 * n2 > n1)
return (1);
if (n1 % n2 == 0)
return (0);

return (is_prime(n1, n2 + 1));

}

/**
 * is_prime_number - print 1 for prime number
 * @n: number
 * Return: 1 or 0
 */

int is_prime_number(int n)
{

if (n < 2)
return (0);

return (is_prime(n, 2));

}
