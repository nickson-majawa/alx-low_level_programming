#include <stdarg.h>
#include <stio.h>
/**
 * print_numbers - prints numbers
 * @separator: string to separator
 * @n: size
 * Return: void
 */
void print_numbers(const char *separotor, const unsigned int n, ...)
{
va_list valist;
unsigned int i = 0;

va_start(valist, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(valist, int));
if (i != (n - 1) && separator)
printf("%s", separator);
}
printf("\n");
va_end(valist);
}
