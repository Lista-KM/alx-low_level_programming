#include <stdio.h>
/**
 * main - A program that prints size of various types
 * Return: 0 (Sucess)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %i bytes(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %i bytes(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %i bytes(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %i bytes(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %i bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
