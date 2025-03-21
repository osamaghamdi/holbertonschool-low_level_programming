#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: char used to delimit.
 * @n: number of elements to print.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int i = 0;

va_start(nums, n);
while (i < n)
{
printf("%d", va_arg(nums, int));
if (separator != NULL && i < n - 1)
printf("%s", separator);
i++;
}
printf("\n");
va_end(nums);
}
