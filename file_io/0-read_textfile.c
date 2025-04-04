#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read a text file and prints it to POSIX stdout
 * @filename: pointer to name of file
 * @letters: number of letters function read and print
 * Return: read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t oo, rr, ww;
char *buffer;

if (filename == NULL)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

oo = open(filename, O_RDONLY);
rr = read(oo, buffer, letters);
ww = write(STDOUT_FILENO, buffer, rr);

if (oo == -1 || rr == -1 || ww == -1 || ww != rr)
{
free(buffer);
return (0);
}
free(buffer);
close(oo);

return (ww);
}
