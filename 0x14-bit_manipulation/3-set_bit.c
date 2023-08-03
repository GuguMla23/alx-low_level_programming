#include "main.h"

/**
 * set_bit - sets a bit at a given point index to 1
 * @n: pointers to the numbers to be changed
 * @index: index of the bit to set to 1
 *
 * Return: 1 for successful, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);

}
