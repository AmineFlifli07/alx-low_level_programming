 #include "main.h"
/**
 * print_rev - prints a string to stdout
 * @s: pointer to the string to print
 */

void print_rev(char *s)
{
	int i = 1;

	while (*s != '0')
	{
		s++;
		i++;
	}

	while (i--)
	{
		putchar(*s);
		s--;
	}
}
