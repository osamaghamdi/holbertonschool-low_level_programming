#include "main.h"
#include <limits.h>

/**
 * _atoi - Convert
 * @s: Pointer
 *
 * Return: The integer value
 */

int _atoi(char *s)
{
int sign = 1, result = 0;
int digit;

while (*s)
{
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
{
digit = *s - '0';

if (result > (INT_MAX - digit) / 10)
return (sign == 1 ? INT_MAX : INT_MIN);

result = result * 10 + digit;
}
else if (result > 0)
break;

s++;
}

return (result * sign);
}
