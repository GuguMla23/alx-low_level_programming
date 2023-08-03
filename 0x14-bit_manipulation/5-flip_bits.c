#include "main.h"

/**
 * flip_bits – counts all the numbers of bits to be changed
 * to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: all numbers of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);

}
