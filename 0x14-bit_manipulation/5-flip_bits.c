#include "main.h"

/**
 * flip_bits - returns the number of bits needed
 * @n: number
 * @m: number
 * Return: counter
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int count = 0, aux = n ^ m;
  
while (aux > 0)
{
count += (aux & 1);
aux >>= 1;
}
  
return (count);

}
