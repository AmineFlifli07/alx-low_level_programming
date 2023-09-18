 #include "main.h"
/**
 * print_rev - prints a string to stdout
 * @s: pointer to the string to print
 */

void print_rev(char *s)
{
	int i = 1;

	while (*str != '0')
	{
		str++;
		i++;
	}

	while (i--)
	{
		putchar(*str);
		str--;
	}
}
