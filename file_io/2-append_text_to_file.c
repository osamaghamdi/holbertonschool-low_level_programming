#include "main.h"

/**
 * append_text_to_file - append text at end of file
 * @filename: pointer to name of file
 * @text_content: string add to the end of file
 * Return: if the function fails or filename is NULL return -1
 * if file does not exist the user lacks write permissions return -1
 * else return 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
int oo, ww, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
oo = open(filename, O_WRONLY | O_APPEND);
ww = write(oo, text_content, len);

if (oo == -1 || ww == -1)
return (-1);

close(oo);
return (1);
}
