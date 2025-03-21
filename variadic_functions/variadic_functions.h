#ifndef VAR
#define VAR
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

int _putchar(char c);

void print_char(va_list c);

void print_int(va_list i);

void print_float(va_list f);

void print_char_point(va_list s);

typedef struct print
{

char *sym;
void (*print)(va_list arg);

} print_t;

#endif
