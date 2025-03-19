#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum
 * @n: counter
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
va_list add;
unsigned int sum = 0, i = 0;

va_start(add, n);

while (i < n)
{
sum += va_arg(add, int);
i++;
}

va_end(add);
return (sum);
}
