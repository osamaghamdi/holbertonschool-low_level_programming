#include "main.h"

/**
 * binary_to_uint - change binary to uint digit
 * @b: string to convert
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{

int ind = 0;
unsigned int res = 0;

if (!b)
return (0);
while (b[ind])
{
if (b[ind] != '0' && b[ind] != '1')
return (0);
res = res << 1;
if (b[ind] == '1')
res = res | 1;
ind++;
}
return (res);
}
