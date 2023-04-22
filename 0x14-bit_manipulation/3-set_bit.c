#include "main.h"

/**
 * set_bit - This will set a bit at a given index to 1
 * @n: n is a pointer to the number to change
 * @index: This is the position or index of the bit to set to 1
 *
 * Return: The function will return 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
