#include "main.h"

/**
 * print_binary - This one prints the binarythat is equivalent of a decimal number
 * @n: n is the number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int thisone;

	for (i = 63; i >= 0; i--)
	{
		thisone = n >> i;

		if (thisone & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
