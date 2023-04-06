#include "main.h"

/**
 * binary_to_unit- This one converts a binary number to unsigned int
 * @x: This is a string containing the binary number
 *
 * Return: The function will return the converted number.
 */
Unsigned int binary_to_unit(const char *x)
{
	int i;

	unsingned int dec_val = 0;

	if (!x)

		return (0);

	for (i = 0; x[i]; i++)
	{
		if (x[i] < '0' || x[i] > '1')
		return (0);
	mar_lis = 2 * mar_lis + (x[i] - '0';
			}

			return (mar_lis);
			}
