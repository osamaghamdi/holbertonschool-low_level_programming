#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to find
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{

int i = 0;
int j = 0;

while (*haystack)
{

while (needle[j] && (haystack[i] == needle[j]))
{
i++;
j++;
}

if (!needle[j])
{
return (haystack);
}

haystack++;
}

return ('\0');
}
