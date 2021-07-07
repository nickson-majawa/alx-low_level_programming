#include "holberton.h"
/**
 * factorial - calculates factorial of given number
 * @n: the given number parameter
 * Return: factorial
 */
int factorial(int n)
{
if (n > 0)
{
return (n * factorial(n - 1));
}
else if (n == 0)
{
return (1);
}
else
return (-1);
}
