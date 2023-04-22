#include "main.h"
#include <unistd.h>
/**
 * _putchar -  This one writes the character c to stdout
 * @c: This is the character to print
 *
 * Return: It is to return 1 On success.
 * On error, -1 is returned, and the errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
