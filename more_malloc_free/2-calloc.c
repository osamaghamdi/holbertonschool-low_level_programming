#include "main.h"
#include <stdlib.h>

/**
 * _calloc - memory for inputted byte size.
 * @nmemb: number of elements
 * @size: size of each array
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *m;
char *f;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

m = malloc(size * nmemb);

if (m == NULL)
return (NULL);

f = m;

for (i = 0; i < (size * nmemb); i++)
f[i] = '\0';

return (m);
}
