/**
 * get_bit - returns the value of a bit at a given index
 * @n: numebr
 * @index: starting from 0 of the bit you want to get
 * Return: bit value at index or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 64)
return (-1);

n >>= index;
return (n & 1);
}
