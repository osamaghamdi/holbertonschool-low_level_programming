#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by new line
 * @separator: char
 * @n: items to print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list print;
char *c;
unsigned int i = 0;

va_start(print, n);

while (i < n)
{
c = va_arg(print, char*);
if (c == NULL)
printf("(nil)");
else
printf("%s", c);
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
i++;
}
printf("\n");
va_end(print);
}
