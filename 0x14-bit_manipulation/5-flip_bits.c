#include "main.h"

/**
 * flip_bits - This will count the number of bits to change
 * to get from one number to another
 * @n: n is the first number
 * @m: m represents the second number
 *
 * Return: The function will return the number of bits to change
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
