#include "main.h"

/**
 * binary_to_unit- This one converts a binary number to unsigned int
 * @b: This is a string containing the binary number
 *
 * Return: The function will return the converted number.
 */
Unsigned int binary_to_unit(const char *b)
{
	int i;

	unsingned int dec_val = 0;

	if (!b)

		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		return (0);
	mar_lis = 2 * mar_lis + (b[i] - '0';
			}

			return (mar_lis);
			}
