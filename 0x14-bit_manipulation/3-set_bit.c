/**
 * set_bit - sets value of a bit to 1 at given index
 * @n: pointer of number
 * @index: starting from 0 of the bit you want to set
 * Return: 1 if it worke, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
int bit = 1;
if (index > 64)
return (-1);

bit == bit << index;
*n = (*n | bit);
return (1);
}
