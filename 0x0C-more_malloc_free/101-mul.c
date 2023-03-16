#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * multiply - multiplies two integers
 * @num1: first integer
 * @num2: second integer
 *
 * Return: product of num1 and num2
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * is_valid_input - checks if input numbers are valid
 * @num1: first number as string
 * @num2: second number as string
 *
 * Return: 1 if valid, 0 otherwise
 */
int is_valid_input(char *num1, char *num2)
{
	while (*num1 != '\0')
	{
		if (!isdigit(*num1))
		{
			return (0);
		}
		num1++;
	}

	while (*num2 != '\0')
	{
		if (!isdigit(*num2))
		{
			return (0);
		}
		num2++;
	}

	return (1);
}

/**
 * print_error - prints error message and exits program with status 98
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - entry point, multiplies two positive integers
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
print_error();
}

char *num1 = argv[1];
char *num2 = argv[2];

if (!is_valid_input(num1, num2))
{
print_error();
}

int result = multiply(atoi(num1), atoi(num2));
printf("%d\n", result);

return (0);
}

