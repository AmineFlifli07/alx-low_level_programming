 #include "main.h"
/**
 * print_rev - prints a string to stdout
 * @s: pointer to the string to print
 */

void print_rev(char *s)
{
	int i = 1;

	while (s[i])
	{
		i++;
	}

	while(i--)
	{
		putchar(s[i]);
	}
	putchar('\n')

}
