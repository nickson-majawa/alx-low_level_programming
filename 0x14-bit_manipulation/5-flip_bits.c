#include "main.h"

/**
 * flip_bits - returns the number of bits needed
 * @n: number
 * @m: number
 * Return: counter
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int aux = n ^ m, count = 0;
  
while (aux > 0)
{
count += (aux & 1);
aux >>= 1;
}
  
return (count);

}
